// Object as a function argument

#include <iostream>

using namespace std;

class complex{
    int real;
    int img;
    public:
        void setData(int r,int i);
        void getData(void);
        void addition(complex);
};

void complex:: setData(int r, int i)
{
    real = r; img = i;
}
void complex:: getData(void)
{
    cout<<real<<" + "<<img<<"i "<<endl;
}

void complex:: addition(complex c)
{
    real = real + c.real;
    img = img + c.img;
}

int main(){

    complex c1, c2;
    c1.setData(2,3);
    c2.setData(5,6);

    c1.getData();
    c1.addition(c2);
    c1.getData();


    
    return 0;
}