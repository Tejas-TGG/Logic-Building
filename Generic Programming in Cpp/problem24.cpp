////////////////////////////////////////////////////////////////////////////
// Write generic program to accept N values and search last occurrence of any
// 
// specific value.
// 
// Input: 10 20 30  40  50  40
// 
// Value to search: 40
//
// Output = 6
///////////////////////////////////////////////////////////////////////////////

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
        }
    }

    return ipos;
}

int main()
{
    int Arr[] = {10, 20, 30, 10, 40, 40, 30, 70, 40};
    int iRet = frequency(Arr, 9, 40);
    cout << "Last occurance of number 40 is at:" << iRet << endl;

    return 0;
}