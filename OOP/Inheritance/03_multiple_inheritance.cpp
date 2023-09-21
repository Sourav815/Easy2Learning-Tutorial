// Multiple inheritance 
#include <iostream>

using namespace std;

class A{
    public:
    int num1;
    void setData(int b){num1 = b;}
};
class B{
    public:
    int num2;
    void setData(int a){num2 = a;}
};

class C : public A, public B{
    int result;
    public:
        void display(void){
            cout<<"Result is : "<<num1 + num2;
        }
};

int main(){
    C obj;
    // obj.setData(15);
    // obj.setData(20);
    obj. A::setData(15);    // Ambiguity resolution
    obj. B::setData(20);
    obj.display();
    
    return 0;
}









