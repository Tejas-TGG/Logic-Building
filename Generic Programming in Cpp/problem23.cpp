////////////////////////////////////////////////////////////////////////////////////////////
// Write generic program to accept N values and search first occurrence of any specific value.
//
// Input:
//
// 10   20  30 10 30  40  10  40  10
//
// Value to search
//
// : 40
//
// Output: 6
///////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>

int frequency(T *arr, int iSize, T iNo)
{
    int Count = 0;
    int ipos = 0;

    for (int icnt = 0; icnt < iSize; icnt++)
    {

        Count++;

        if (iNo == arr[icnt])
        {
            ipos = Count;
            break;
        }
    }

    return ipos;
}

int main()
{
    int Arr[] = {10, 20, 30, 10, 40, 40};
    int iRet = frequency(Arr, 6, 40);
    cout << "first occurance of number 40 is at:" << iRet << endl;

    return 0;
}