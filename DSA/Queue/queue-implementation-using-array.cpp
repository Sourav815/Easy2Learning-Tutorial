/* Queue implementation using array
i. Insertion
ii. Deletion
iii. Updation
iv. Display
*/

#include <iostream>

using namespace std;

#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void insert(int);
int Delete(void);
void display(void);

int main()
{

    int ch, val;

    do
    {
        cout << "\n\n ------ Menu ------\n";
        cout << "Press 1: Insert" << endl;
        cout << "Press 2: Delete" << endl;
        // cout << "Press 3: Peek" << endl;
        cout << "Press 4: Display" << endl;
        cout << "-----------------------------\n\n";
        cout << "Enter your option: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value to store into the queue: " << endl;
            cin >> val;
            insert(val);
            break;
        case 2:
            val = Delete();
            if (val != -1)
            {
                cout << "Deleted Value: " << val << endl;
            }
            break;
        // case 3:
        //     val = peek();
        //     if (val != -1)
        //     {
        //         cout << "Top-> " << val << endl;
        //     }
        //     break;
        case 4:
            display();
            break;

        default:
            cout << "\nHave a nice day!\n";
            break;
        }
    } while (ch != 0);

    return 0;
}

void insert(int val)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is already filled...";
    }
    else if (rear == -1 && front == -1)
    {
        front = rear = 0;
        queue[rear] = val;
        cout << val << " is successfully inserted...";
    }
    else
    {
        rear++;
        queue[rear] = val;
        cout << val << " is successfully inserted...";
    }
}

int Delete(void)
{
    int val;
    if (front > rear || front == -1)
    {
        cout << "Queue is empty...";
    }
    else
    {
        val = queue[front];
        front++;
        return val;
    }
    return -1;
}

void display(void)
{
    cout<<"Front ->";
    for (int i = front; i <= rear; i++)
    {
        cout<<" "<<queue[i];
    }
    cout<<" <-Rear";
    
}