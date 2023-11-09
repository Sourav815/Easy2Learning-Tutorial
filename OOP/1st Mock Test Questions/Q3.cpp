// Write a program to swap the data of two variable by passing the
// reference to the function.

#include <iostream>

using namespace std;


// call by reference

// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// call by value

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a;
    int b;

    cout << "Enter the value of a and b :" << endl;
    cin >> a >> b;
    cout << "Before swapping of the data of a = " << a << ", b = " << b<<endl;
    // swap(&a, &b);
    swap(a, b);
    cout << "After swapping of the data of a = " << a << ", b = " << b;
    return 0;
}