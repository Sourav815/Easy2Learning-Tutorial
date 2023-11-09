#include <iostream>

using namespace std;

class student{
    string name;
    int roll;
    float math;
    float sci;
    float avgM;
    public:
        void setData(string, int , float, float);
        void getData(void);
        void MarksCal(void);
};

void student :: setData(string sName, int sroll, float Math, float Science)
{
    // this.name = name;
    name = sName;
    roll = sroll;
    math = Math;
    sci = Science;
}

void student::MarksCal(void)
{
    avgM = (math+sci)/2;
}

void student :: getData(void)
{
    cout<<"Student name: "<<name<<endl;
    cout<<"Roll No. "<<roll<<endl;
    cout<<"Marks: "<<avgM<<endl;
    cout<<"--------------------"<<endl;
}

int main(){
    student S[3];
    string name;
    int roll;
    float math;
    float sci;

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the student "<<i+1<<" details: "<<endl;
        cin>>name;
        cin>>roll;
        cin>>math;
        cin>>sci;
        S[i].setData(name,roll,math, sci);
    }

    for (int i = 0; i < 3; i++)
    {
       S[i].MarksCal();
       S[i].getData();
    }
    return 0;
}