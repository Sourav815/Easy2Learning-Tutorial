#include <iostream>

using namespace std;

class base{
    int a;
    int b;
    public:
        void getData();
        int sendData();
        void display();
};

void base :: getData(void)
{
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
}
void base:: display(){
    cout<<"Value of a and b : "<<a<<", "<<b<<endl;
}
int base:: sendData(void)
{
    return a;
}

class derived : public base{
    int c;
    public:
        void mult();
        void printData();
};

void derived::mult()
{
    c = sendData() * 5;
}
void derived::printData(){
    display();
    cout<<"Value of c : "<<c<<endl;
}

int main(){
    derived obj;
    obj.getData();
    obj.mult();
    obj.printData();
    
    return 0;
}