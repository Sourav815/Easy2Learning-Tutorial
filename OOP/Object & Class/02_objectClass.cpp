#include <iostream>

using namespace std;

// class student
// {
//     private:
//         string sName;
//         int sRoll;
//         float sMarks;
//     public:
//         void setData (string name, int roll, float marks)
//         {
//             sName = name;
//             sRoll = roll;
//             sMarks = marks;
//         }
//         void getData (void)
//         {
//             cout<<"Student Name: "<<sName<<endl;
//             cout<<"Roll No: "<<sRoll<<endl;
//             cout<<"Student Marks : "<<sMarks<<"%"<<endl; 
//         }
// };

class student
{
    private:
        string sName;
        int sRoll;
        float sMarks;
    public:
        void setData (string , int, float );
        void getData (void);
};

void student :: setData(string name, int roll , float marks)
{
        sName = name;
        sRoll = roll;
        sMarks = marks;
}

void student :: getData(void)
{
    cout<<"Student Name: "<<sName<<endl;
    cout<<"Roll No: "<<sRoll<<endl;
    cout<<"Student Marks : "<<sMarks<<"%"<<endl;
}

int main(){
    student stu;

    stu.setData("Ram", 29, 80);
    stu.getData();
    
    return 0;
}