/////////////////////////////////////////////////////////////////////////////////////////////
// 
// Wriite generic program to accept N values from user and return  addition of that values..............
// 
///////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>

T AddN(T *arr, int size)
{
    T sum = 0;

    for (int icnt = 0; icnt < size; icnt++)
    {
        sum = sum + arr[icnt];
    }

    return sum;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int Sum = AddN(Arr, 5);
    cout << Sum<<endl;

    float brr[] = {10.2, 20.3, 30.4, 40.8, 50.1};
    float Summation = AddN(brr, 5);
    cout << Summation;

    return 0;
}