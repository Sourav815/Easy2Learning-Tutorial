 #include <iostream>
 
 using namespace std;

class A{
    public:
    void display(void){cout<<"I am from class A (grand parent)"<<endl;}
};
class B: virtual public A{
    public:
    void displayB(void){cout<<"I am from class B (Parent 1)"<<endl;}
};
class C: public virtual A{
    public:
    void displayC(void){cout<<"I am from class C (Parent 2)"<<endl;}
};

class D : public B, public C{
    public:
    void displayC(void){cout<<"I am from class D (Child)"<<endl;}
};
 
int main(){
    D obj;
    obj.display();
    // B obj;
    return 0;
 }