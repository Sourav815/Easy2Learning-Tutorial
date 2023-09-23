#include <iostream>

using namespace std;

typedef int (*FunPtr)(int, int);
int add(int a, int b)
{
    return (a+b);
}
int mult(int a, int b)
{
    return (a*b);
}

int main()
{
    FunPtr ptr;
    ptr = &add;
    cout<<"value of ptr "<<ptr<<endl;
    int result = ptr(5,2);
    cout<<"5 + 2 = "<<result<<endl;
    ptr = &mult;
    int r = ptr(5,2);
    cout<<"5 * 2 = "<<r;

    return 0;
}