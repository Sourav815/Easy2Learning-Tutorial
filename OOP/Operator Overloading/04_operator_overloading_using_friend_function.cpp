//  operator overloading using friend function
#include <iostream>

using namespace std;

class complex{
    int real;
    int img;
    public:
        complex(){}
        complex(int r, int i){real = r; img = i;}
        void display(void);
        friend complex operator *(complex c1, complex c2);
};

complex operator *(complex c1, complex c2){
    complex temp;
    temp.real = (c1.real*c2.real)-(c1.img * c2.img);
    temp.img = (c1.real*c2.img)+(c1.img*c2.real);
    return temp;
}

// void complex:: display(void){
//     cout<<real<<" + "<<img<<"i"<<endl;
// }

void complex:: display(void){
    if (img>=0)
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    else if(img<0)
    {
        cout<<real<<" "<<img<<"i"<<endl;
    }
    
}

int main(){

    complex c1(4, -5);
    complex c2(8, 12);  

    complex result;
    c1.display();
    c2.display();
    result = c1 * c2;
    result.display();
    
    return 0;
}