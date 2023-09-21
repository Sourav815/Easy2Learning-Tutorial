#include <iostream>

using namespace std;
class student{
    int roll;
    public:
    student(){}
    student(int r){roll = r;}
    int getRoll(void){
        return roll;
    }
};

class result: public student{
    int sub1, sub2;
    public:
    result(){}
    result(int r, int phy, int math):
    student(r)
    {
        sub1 = phy; sub2 = math;
    }
    void display(void){
        cout<<"Roll: "<<getRoll()<<endl;
        cout<<"Average marks: "<<(sub1 + sub2)/2;
    }
};

int main(){
    result obj(25, 82, 98);
    obj.display();
    return 0;
}