// All about pointer
#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int *p;
    p = &a; // &a == address of variable a

    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*(p); // * => dereference operator
    
    return 0;
}