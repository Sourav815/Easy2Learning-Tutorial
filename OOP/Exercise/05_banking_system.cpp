#include <iostream>
#include <cmath>

using namespace std;

class Account
{
public:
    string name;  // Customer name
    string ACCNO; // Account No
    void setDataAccount(string n, string AN)
    {
        name = n;
        ACCNO = AN;
    }
};

class SB : public Account
{
    float amount;
    float ROI;      // Rate of interest
    string ACCType; // Account Type
public:
    void setDataSB(string n, string AN, string AT, int balance)
    {
        setDataAccount(n, AN);
        amount = balance;
        ACCType = AT;
    }
    float withdrawAmount(float balance)
    {
        amount = amount - balance;
        return amount;
    }
    float interestCheck(int n, float r = 8)
    {
        float interest = (pow((1 + ROI / 100), n));
        return (amount * interest - amount); // p(1+(r/100))^n -p
    }
    bool requestChecqueBook(SB C)
    {
        if (C.ACCType == ACCType)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class CA : public Account
{
    float amount;
    string ACCType; // Account Type
public:
    void setDataCA(string n, string AN, string AT, int balance)
    {
        setDataAccount(n, AN);
        amount = balance;
        ACCType = AT;
    }
};

int main()
{

    SB obj[50];
    int choice, n;
    string name, AT, AN;
    float Amount;

    do
    {
        cout << "---------Menu--------\n\n";
        cout << "Press 1: Open Account" << endl;
        cout << "Press 2: Withdraw Amount" << endl;
        cout << "Press 3: Interest Checking" << endl;
        cout << "Press 4: CheckBook Enquery" << endl;
        cout << "Press 5: Exit" << endl;
        cout << "---------Enter your Option--------\n\n";
        cout << "Enter your Option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of customer: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter the Customer details [Customer Name>AccountNumber>AT>Amount]: ";
                cin >> name >> AN >> AT >> Amount;
                obj[i].setDataSB(name, AN, AT, Amount);
            }
            break;
        case 2:
            cout << "Enter the Amount to Withdraw & Account No: ";
            cin >> n >> AN;
            for (int i = 0; i < n; i++)
            {
                if (obj[i].ACCNO == AN)
                {
                    cout << "Debited Amount: " << n << " Cleared Amount: " << obj[i].withdrawAmount(n) << endl;
                }
                else
                {
                    cout << "Authentication Failed. please enter correct Account no..." << endl;
                }
            }
            break;
        case 3:
            cout << "Enter the Time period & Account No to know your Interest : ";
            cin >> n >> AN;
            for (int i = 0; i < n; i++)
            {
                if (obj[i].ACCNO == AN)
                {
                    cout << "Interest Amount: " << n << " Cleared Amount: " << obj[i].interestCheck(n) << endl;
                }
                else
                {
                    cout << "Authentication Failed. please enter correct Account no..." << endl;
                }
            }
            break;
        default:
            cout<<"Have a good Day! please visit Again";
            break;
        }

    } while (choice != 5);

    return 0;
}