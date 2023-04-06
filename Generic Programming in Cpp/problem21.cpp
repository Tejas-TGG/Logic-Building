/////////////////////////////////////////////////////////////////////////////////////////////
// 
// Wriite generic program to accept N values from user and return smallest values..............
// 
///////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>

T Min(T *arr, int size)
{
    T temp = arr[0];

    for (int icnt = 0; icnt < size; icnt++)
    {
        if(temp>arr[icnt])
        {
            temp=arr[icnt];
        }
    }

    return temp;
}

int main()
{
    int Arr[] = {10, 20, 60, 40, 50};
    int imin = Min(Arr, 5);
    cout << imin<<endl;

    float brr[] = {10.2, 20.3, 60.4, 40.8, 50.1};
    float fMin = Min(brr, 5);
    cout << fMin;

    return 0;
}