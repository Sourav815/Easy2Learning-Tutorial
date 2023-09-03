// Destructor in c++
#include <iostream>

using namespace std;

int count = 0;

class demo
{
    int a;

public:
    demo() {}
    demo(int x)
    {
        count++;
        cout << "Object is getting constructed... count= "<<count<< endl;
        a = x;
    } // inline contructor
    void display(void);
    ~demo()
    {
        count--;
        cout << "Objet is getting destructed... count = "<<count << endl;
    }
    // ~demo();
};

void demo:: display(void){
    cout<<"a = "<<a;
}

int main()
{
    cout<<"Object from main scope..."<<endl;
    demo A(5);
    {
        cout<<"Entering into the inner scope..."<<endl;
        demo B(10);
    }
    cout<<"Exit from inner scope..."<<endl;
    return 0;
}