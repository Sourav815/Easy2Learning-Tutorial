#include <iostream>

using namespace std;

int main(){
    
    // int person1 = 15;
    // int person2 = 22;

    // int age ;
    // cout<<"Enter your age: ";
    // cin>>age;

    // if( age > 18 )
    // {
    //     cout<<"You are eligible to vote."<<endl;
    // }
    // else{
    //     cout<<"You are not eligible to vote."<<endl;
    // }

    // age ? , age <= 20 -> you are teenage, (age>20 && age <60) -> you are man, age >= 60 you age senior citizen
    // if (age<=20)
    // {
    //     cout<<"You are a teenage.";
    // }
    // else if(age>20 && age <60){
    //     cout<<"You are a man";
    // }
    // else {
    //     cout<<"Your age a senior citizen";
    // }

    // Swicth case 

    // int num ;
    // cout<<"Enter the day number : ";
    // cin>>num;

    // switch (num)
    // {
    // case 1:
    //     cout<<"Sunday";
    //     break;
    // case 2:
    //     cout<<"Monday";
    //     break;
    // case 3:
    //     cout<<"Tuesday";
    //     break;
    
    // default:
    //     cout<<"Your given number is not valid";
    //     break;
    // }


    // nested if 

    int roll;
    cout<<"Enter you roll no. ";
    cin>>roll;

    if (roll <= 10)
    {
        if (roll <=5 )
        {
            cout<<"Congrats you win a book";
        }
        else{
            cout<<"Congrats you win a pen";
        }  
    }
    else {
        cout<<"Sorry. try to improve yourself";
    }
    



    return 0;
}