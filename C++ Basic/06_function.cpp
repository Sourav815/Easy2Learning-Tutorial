#include <iostream>

using namespace std;

// function prototyping 
// syntax : return-typr  function-name (agrument list);
// int addtion(int , int);
// void mult(int , int );
// float division(void);
void sub(void);

int main(){
    int a, b , r ;
    float res;
    // printf("Enter the first number: ");
    // scanf("%d",&a);  // & : address of a
    // printf("enter the second number: ");
    // scanf("%d",&b);
    // result = a + b;
    // printf("Result = %d",result);
    
    // result = a + b;
    // cout<<"Result = "<<result;
    // r = addtion(a,b); // a, b are parameters
    // mult(a,b); // function invoking
    // cout<<"Result = "<<r;

    res = division();
    cout<<"Result = "<<res;

    return 0;
}

int addtion(int x, int y)
{
    int result;
    result = x +y;
    return result;
}

void mult(int p, int q)
{
    int result ;
    result  = p * q;
    cout<<"Multiplication of "<<p<<" and "<<q<<" = "<<result;
}

float division(void){
    int a, b;
    float c,d;
    cout<<"Enter the first numebr : ";
    cin>>a;
    cout<<"Enter the second numebr : ";
    cin>>b;
    c = float(a)/float(b);
    d = a / b;
    cout<<d<<endl;
    // type casting
    return (c);
    
}
