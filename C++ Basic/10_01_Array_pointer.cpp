#include <iostream>

using namespace std;

int* arrayMultiplication(int* arr, int n)
{
    for (int i = 0; i < n ; i++)
    {
        *(arr+i) = *(arr+i) * 5;
    }
    return arr;
}
// void arrayMultiplication(int* arr, int n)
// {
//     for (int i = 0; i < n ; i++)
//     {
//         *(arr+i) = *(arr+i) * 5;
//     }
//     cout<<"Array multiplication by 5: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<*(arr+i)<<" ";
//     }
    
    
// }

int main(){
    int array[5];
    cout<<"Enter array element: ";
    for (int i = 0; i < 5; i++)
    {
        // scanf("%d",&array[i]);
        scanf("%d",(array + i));
    }
    int *ptr;
    ptr =  arrayMultiplication(array,5);

    cout<<"Array multiplication by 5: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<*(ptr+i)<<" ";
    }

    
    return 0;
}