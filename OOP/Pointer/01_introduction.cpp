#include <iostream>

using namespace std;

int main(){

    int a ;
    a = 15;
    int *ptr;
    ptr = &a;
    int **pptr;
    pptr = &ptr;

    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of ptr = "<<ptr<<endl;
    cout<<"Address of a = "<<&a<<endl;
    cout<<"Value at address of ptr = "<<*ptr<<endl;
    cout<<"value of a = "<<*(&a)<<endl;

    cout<<"value of pptr = "<<pptr<<endl;
    cout<<"VAlue of a using pptr: "<<*(*(pptr));



    return 0;
}