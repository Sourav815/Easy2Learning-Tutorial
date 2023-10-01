#include <iostream>

using namespace std;

class BC{
    public:
    int b;
    void show(){
        cout<<"I am from base class and value of b = "<<b<<endl;
    }
};
class DC : public BC{
    public:
        int d;
        void show()
        {
            cout<<"I am from Derived class and value of d = "<<d<<endl;
        }
};

int main(){
    
    BC *bptr;
    BC base;
    bptr = &base;
    
    bptr->b = 50;
    cout<<"bptr points to base object\n";
    bptr->show();   // obviously base class show function will invoke

    DC derived;
    // DC *dptr;
    bptr = &derived;
    bptr->b = 200;
    bptr->show();

    DC *dptr;
    dptr = &derived;
    dptr->d = 600;
    dptr->show();

    return 0;
}