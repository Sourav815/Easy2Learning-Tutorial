#include <iostream>
#include <cmath>

using namespace std;
class polar{
    int deg, rad;
    float x,y;
    public:
    polar(){}
    polar(int d, int r){deg = d; rad = r;}
    void display(void);
    void conversion(void);
    polar operator +(polar);

};

void polar::display(void)
{
    cout<<"("<<x<<", "<<y<<")";
}

void polar:: conversion(void){
    x = rad * cos(deg*3.14/180);
    y = rad * sin(deg*3.14/180);
}

polar polar:: operator+(polar p)
{
    polar temp;
    temp.x = x + p.x;
    temp.y = y + p.y;
    // finally conver temp value to polar system.
    

    return temp;
}

int main(){
    polar p1(30, 5);
    polar p2(60,10);
    polar p3;

    p1.conversion();
    p2.conversion();
    p3 = p1 + p2;
    cout<<"After adding p1 and p2 point: ";
    p3.display();
    
    return 0;
}