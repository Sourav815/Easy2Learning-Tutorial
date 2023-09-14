// Example of unary operator overloading

#include <iostream>

using namespace std;

class unary_operation{
    int a;
    public:
        unary_operation(){}
        unary_operation(int x){a = x;}
        // void operator +(void);
        void operator -(void);
        void display(void);
};

// void unary_operation::operator+(){
//     a = +a;
// }
void unary_operation::operator-(){
    a = -a;
}
void unary_operation:: display(void){
    cout<<"a = "<<a<<endl;
}

int main(){
    unary_operation obj1(-5);
    unary_operation obj2(10);

    -obj1;  // obj1.operator-();
    -obj2;

    obj1.display();
    obj2.display();
    
    return 0;
}