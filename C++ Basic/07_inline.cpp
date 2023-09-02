#include <iostream>

using namespace std;

inline int addition(void)
{
    int a,b;
    cin>>a>>b;
    return (a+b);
}

int main(){
    int result ;
    result = addition();
    cout<<"Result is : "<<result;
    return 0;
}