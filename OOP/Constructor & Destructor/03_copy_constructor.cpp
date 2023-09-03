// copy constructor

#include <iostream>

using namespace std;

class student
{
    string name;
    int roll;
    public:
        student(){}
        student(string, int);
        void displayData(void);
};

student:: student(string n, int r)
{
    name = n;
    roll = r;
}

void student:: displayData(void){
    cout<<"Student Name : "<<name<<endl;
    cout<<"Roll NO: "<<roll<<endl;
}

int main(){
    student s1 = student("Ram",5);  // explicit intialization
    student s2(s1);  // implicit initialization

    s2.displayData();
    return 0;
}