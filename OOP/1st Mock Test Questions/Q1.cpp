#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    float b = 2.5;
    // int show(a);
    // float show(b);

    return 0;
}

/*
Q1.cpp: In function 'int main()':
Q1.cpp:10:17: error: conflicting declaration 'float show'
     float show(b);
                 ^
Q1.cpp:9:9: note: previous declaration as 'int show'
     int show(a);

*/
