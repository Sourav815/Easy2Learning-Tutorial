/*
        ** Some important facts **

-> Only existing operator can be overloaded.
-> Overloaded operator follow the syntax rule of original operator.
-> There some operator that can't be overloaded. (e.g: ., .*, ::, ?:).
-> we can't use friend functions to overloaded certain operators. (e.g. =,(), [], ->)
*/

#include <iostream>

using namespace std;

float areaCal(float a);
int areaCal(int b);

int main(){
    float a;
    int b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"The area of circle is : "<<areaCal(a);
    cout<<endl;
    cout<<"The area of paralleogram: "<<areaCal(b);
    return 0;
}

float areaCal(float a){
    float result = 3.14 * a *a ;
    return result;
}

int areaCal(int b){
    int result =  b *b ;
    return result;
}