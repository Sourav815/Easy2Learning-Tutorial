#include <iostream>

using namespace std;

float interestCal(int capital, int year, float roi = 3.14){
    float result;
    result = (capital * year * roi) / 100;
    return result;
}

int main(){

    int cap , year;
    float roi, result;
    char check;

    cout<<"Are you male or female: (F/M) ";
    cin>>check;
    cout<<"Enter your amount : ";
    cin>>cap;
    cout<<"Enter the time period: ";
    cin>>year;
    if (check == 'F')
    {
        result = interestCal(cap, year, 12.8);
    }
    else if(check == 'M'){
        result = interestCal(cap, year);
    }

    cout<<"Circumference is : "<<result;
    return 0;
}

