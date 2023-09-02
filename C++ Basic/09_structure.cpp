// All about structure

#include <iostream>

using namespace std;

typedef struct student
{
    string name;
    int roll;
    float sResult;
} s;
// typedef struct student
// {
//     char sName[50];
//     int roll;
//     float sResult;
// }s;

int main()
{
    // struct  student student1 = {"Amit", 20, 9.1};

    // cout<<student1.sName<<endl;
    // cout<<student1.roll<<endl;   // (.) operator is used for accessing element from stuct variable
    // cout<<student1.sResult<<endl;

    // s student2;

    // int roll;
    // float result;
    // string name;

    // cout<<"Enter your name : ";
    // cin>>student2.name;
    // cout<<"Enter your roll no. ";
    // cin>>student2.roll;
    // cout<<"Enter your roll no. ";
    // cin>>student2.sResult;

    // cout<<"Student record----------"<<endl;
    // cout<<"Name: "<<student2.name<<endl;
    // cout<<"Roll NO: "<<student2.roll<<endl;
    // cout<<"Result: "<<student2.sResult<<endl;

    // int arr[5];
    s student[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"<<<Student "<<(i+1)<<" >>>"<<endl;
        cout<<"Enter your name : ";
        cin>>student[i].name;
        cout<<"Enter your roll no. ";
        cin>>student[i].roll;
        cout<<"Enter your Result:  ";
        cin>>student[i].sResult;
    }

    cout<<"--------Student Record------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Name: "<<student[i].name<<endl;
        cout<<"Roll NO: "<<student[i].roll<<endl;
        cout<<"Result: "<<student[i].sResult<<endl;
        cout<<"--------------------------------"<<endl;
    }


    return 0;
}