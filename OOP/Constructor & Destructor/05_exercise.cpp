#include <iostream>

using namespace std;

class demo{
    int a,b,c;
    public:
        demo(){}
        demo(int x, int y, int z)
        {
            a =x ; b =y ; c =z;
        }
        void show(){
            cout<<"Value of a , b, c "<<a<<" "<<b<<" "<<c<<endl;
        }
};

int main(){
    demo obj(10,20,30);
    demo obj2 = obj;
    demo obj3;
    obj3 = obj2;
    obj3.show();
    return 0;
}