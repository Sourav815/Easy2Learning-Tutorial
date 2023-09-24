// Reverse the number
#include <iostream>
using namespace std;
class reverse
{
    int a;

public:
    void getdata();
    void setdata();
};
void reverse::getdata()
{
    cout << "enter the number " << endl;
    cin >> a;
}
void reverse::setdata()
{
    int rev = 0, rem;
    while (a != 0)
    {
        rem = a % 10;
        rev = (rev * 10) + rem;
        a = a / 10;
    }
    cout << "the reverse is " << rev << endl;
}
int main()
{
    reverse aa;
    aa.getdata();
    aa.setdata();
    return 0;
}