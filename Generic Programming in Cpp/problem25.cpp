//////////////////////////////////////////////////////////////////////
// Write generic program to accept N values and reverse the contents.
//
// Input:10 20  30  40
//
// Output:- 40  30  20  10
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>

void Reverse(T *arr, int iSize)
{

    for (int icnt = iSize; icnt >= 0; icnt--)
    {
        cout << arr[icnt] << ",";
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 10, 40, 40, 30, 70, 40};

    Reverse(Arr, 9);

    return 0;
}