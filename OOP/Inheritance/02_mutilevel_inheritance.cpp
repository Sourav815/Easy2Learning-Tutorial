#include <iostream>

using namespace std;

class roll{
    int roll;
    public:
        void getRoll(void);
        void putRoll();
};

void roll::getRoll(void)
{
    cout<<"Enter the roll no. of a student: ";
    cin>>roll;
}
void roll::putRoll(void){cout<<"Roll no: "<<roll<<endl;}

class marks:public roll{
    public:
    float math;
    float phy;
    void getMarks();
};
void marks::getMarks(void)
{
    cout<<"Enter the marks of a student (math, physics): ";
    cin>>math>>phy;
}

class performance:public marks{
    char grade;
    public:
        void gradeCal(void);
        void print(void);
};

void performance::gradeCal()
{
    float r;
    r = ((math + phy)/20);
    if (r>=8 && r<=10)
    {
        grade = 'A';
    }
    else if (r>=6 && r<8)
    {
        grade = 'B';
    }
    else if (r>=4 && r<6)
    {
        grade = 'C';
    }
    else if (r<4)
    {
        grade = 'D';
    }  
}
void performance::print(void){
    putRoll();
    cout<<"Mark of Math and physics: "<<math<<", "<<phy<<endl;
    cout<<"Your grade is : "<<grade;
}

int main(){
    performance student;
    student.getRoll();
    student.getMarks();
    student.gradeCal();
    student.print();
    return 0;
}