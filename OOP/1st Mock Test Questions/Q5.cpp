// Write a program to find a prime number using constructor.

#include <iostream>

class prime
{
    int num;

public:
    int count = 0;
    prime() {}
    prime(int n) { num = n; }
    bool checkPrime(void)
    {
        for (int i = 1; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 1)
            return true;
        else
            return false;
    }
};

using namespace std;

int main()
{
    prime n(11);

    if (n.checkPrime())
    {
       cout<<"This is a prime number...";
    }
    else
    {
        cout<<"This is not a prime number...";
    }
    return 0;
}