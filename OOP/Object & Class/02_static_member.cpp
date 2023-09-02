
// THis code will demonstrate static members

#include <iostream>

using namespace std;

class operation {

    static int count;
    int n,m;
    public:
    void setData(int, int);
    void addtion(void);
    void multiP(void);
    void finalCount(void)
    {
        cout<<"Count is "<<count<<endl;
    }
};

int operation :: count = 0;

void operation:: setData(int a, int b)
{
    n = a;
    m = b;
}

void operation:: addtion(void)
{
    count++;
    cout<<n<<" + "<<m<<" = "<<(n+m)<<endl;
    cout<<count<<endl;
}
void operation:: multiP(void)
{
    count++;
    cout<<n<<" * "<<m<<" = "<<(n*m)<<endl;
    cout<<count<<endl;
}

int main(){
    
    operation op1;
    operation op2;

    op1.setData(5,6);
    op2.setData(10,12);

    op1.addtion();
    op2.multiP();
    op1.multiP();

    op1.finalCount();
    op2.finalCount();

    op2.addtion();
    op2.finalCount();
    op1.finalCount();

    



    return 0;
}