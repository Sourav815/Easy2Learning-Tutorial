#include <iostream>

using namespace std;

class calculator{
    int a,b;
    public:
        calculator(){}
        // calculator(int x, int y){
        //     a=x; b =y;
        // }
        calculator(int a, int b){
            this->a = a; this->b = b;
        }
        int addtion(void)
        {
            return a+b;
        }
        int mult(void)
        {
            return a*b;
        }
};

int main(){
    calculator obj(2,5);
    calculator *ptr;
    ptr = &obj;
    
    // cout<<"sum = "<<obj.addtion()<<endl;
    cout<<"sum = "<<ptr->addtion()<<endl;
    cout<<"multiplication = "<<ptr->mult()<<endl;
    
    return 0;
}