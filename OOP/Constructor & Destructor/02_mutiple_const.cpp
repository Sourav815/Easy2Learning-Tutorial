// Multiple Constructor

#include <iostream>

using namespace std;

class scalarMult
{
    int *array;
    int scalar;

public:
    scalarMult(){}
    scalarMult(int * arr, int s);
    scalarMult(int * arr);
    void mutiplication(void);
};

scalarMult::scalarMult(int* arr, int s)
{
    array = arr;
    scalar = s;
}
scalarMult::scalarMult(int* arr)
{
    array = arr;
    scalar = 5;
}
void scalarMult::mutiplication(void)
{
    for (int i = 0; i < 5; i++)
    {
        array[i] = array[i] * scalar;
    }
    cout << "Scalar multiplication-----" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout<<endl;
}

int main()
{

    int arr[5], s;
    cout<<"Enter the element of an array:";
    for (int i = 0; i < 5; i++)
    {
       cin>>arr[i];
    }
    cout<<"Enter the scalar value: "<<endl;
    cin>>s;
    
    scalarMult obj;
    scalarMult obj2(arr,s);
    scalarMult obj3(arr);

    // obj.mutiplication();
    obj2.mutiplication();
    obj3.mutiplication();



    return 0;
}