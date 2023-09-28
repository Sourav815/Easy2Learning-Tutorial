#include <iostream>
using namespace std;
class time
{
    int h, m;

public:
    void getdata();
    void add(time);  // obj3 = obj.funt(ob2) | ob3 = funt(obj1,obj2);
    void setdata();
};
void time::getdata()
{
    cout << "enter the time in hour and minute" << endl;
    cin >> h;
    cin >> m;
}

void time::add(time b)
{
    int h;
    h = (m + m) / 10;
    h += h + b.h;
    m = (m + m) % 10;
    cout<<h<<" : "<<m;
}
void time::setdata()
{
    cout << "hour:" << h << "minute" << m << endl;
}
int main()
{
    time aa, bb, cc;
    aa.getdata();
    bb.getdata();
    aa.add(bb);
    aa.setdata();
    bb.setdata();
    cc.setdata();

    return 0;
}