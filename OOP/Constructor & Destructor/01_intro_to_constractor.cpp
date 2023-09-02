// Introduction to constructor
/*
1. const. should be declared in public section.
2. constructor is invoked automatically when object is declared
3. There is no return type of a constructor
*/

#include <iostream>

using namespace std;

class complex
{
    int real;
    int img;
public:
    // complex()
    // {
    //     real = 0;
    //     img = 0;
    // }
    complex(){}   // default const.
    complex(int, int);  // parameterized constructor
    void display(void);
    complex addtion(complex);
};

complex::complex(int r, int i)
{
    real = r;
    img = i;
}

void complex::display(void)
{
    cout << real << " + " << img << "i";
}

complex complex::addtion(complex c)
{
    complex temp(0, 0);
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

int main()
{
    complex c1(7, 8);            // implicit call
    complex c2 = complex(10, 2); // explicit call
    complex c;

    c = c1.addtion(c2);

    c.display();

    return 0;
}