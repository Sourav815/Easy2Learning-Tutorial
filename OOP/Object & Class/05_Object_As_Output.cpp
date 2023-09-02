// Object as a function argument

#include <iostream>

using namespace std;

class complex{
    int real;
    int img;
    public:
        void setData(int r,int i);
        void getData(void);
        complex addition(complex);
};

void complex:: setData(int r, int i)
{
    real = r; img = i;
}
void complex:: getData(void)
{
    cout<<real<<" + "<<img<<"i "<<endl;
}

complex complex:: addition(complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

int main(){

    complex c1, c2, c3;
    c1.setData(2,3);
    c2.setData(5,6);

    c1.getData();
    c3 = c1.addition(c2);
    c1.getData();
    c3.getData();

    return 0;
}