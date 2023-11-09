//Write a program to compute the area of a triangle and a circle by
// overloading the area() function.

#include <iostream>
#include <cmath>

using namespace std;

void area(int b, int h)
{
    cout<<"Area of Triangle (1/2)*b*h: "<<0.5*b*h<<endl;
}
void area(int r)
{
    cout<<"Area of Circle : "<<M_PI*r*r<<endl;
}

int main(){
    int b,h,r, choice;
    
    do
    {
        cout<<"\n--------MENU-------\n";
        cout<<"Press 1: To calculate Area of Circle"<<endl;
        cout<<"Press 2: To calculate Area of Triangle"<<endl;
        cout<<"Press 0: To Exit"<<endl;
        cout<<"----------------------\n\n";
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the radius of the circle: ";
            cin>>r;
            area(r);
            break;
        
        case 2:
            cout<<"Enter the base and height of the Triangle: ";
            cin>>b>>h;
            area(b, h);
            break;
        
        default:
            cout<<"Have a good Day!"<<endl;
            break;
        }
    } while (choice != 0);
    return 0;
}