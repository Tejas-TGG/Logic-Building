////////////////////////////////////////////////////////////////////////////////////////////
//Write generic program to accept N values and count frequency of any specific
// 
// value.
// 
// Input: 10    20  10  10  10  20  30  54  
// 
// Value to check frequency: 10
// 
// Output:
// 
// 4
///////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>

int frequency(T *arr, int iSize, T iNo)
{
    int Count = 0;

    for (int icnt = 0; icnt < iSize; icnt++)
    {
        if (iNo == arr[icnt])
        {
            Count++;
        }
    }

    return Count;
}

int main()
{
    int Arr[] = {10, 20, 30, 10, 40, 40};
    int iRet = frequency(Arr, 6, 10);
    cout << "frequency of number 10 is:" << iRet<<endl;

    char brr[]={'a','a','b'};
    int Ret=frequency(brr,3,'a');
    cout << "frequency of number a is:" << Ret;

    return 0;
}