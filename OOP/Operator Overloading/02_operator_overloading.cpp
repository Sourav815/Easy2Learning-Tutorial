#include <iostream>

using namespace std;

class complex{
    int real, img;
    public:
        complex(){}
        complex(int r, int i){real = r; img = i;}
        void display(void);
        complex operator +(complex);
};

void complex:: display(void){
    cout<<real<<" + "<<img<<"i"<<endl;
}
complex complex:: operator +(complex c){
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

int main(){
    complex c1(10,20);
    complex c2(7,8);
    complex c3;

    // c1.display();
    // c = a+b;
    // c1.display(c2);
    c3 = c1 + c2;  // c3 = c1.operator +(c2);
    c3.display();
    
    return 0;
}