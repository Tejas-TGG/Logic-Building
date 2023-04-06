/////////////////////////////////////////////////////////////////////////////////////////////
// 
// Wriite generic program to find largest number from three numbers..............
// 
// /////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>

T Max(T No1, T No2, T No3)
{
    T temp = No1;
    int max = 0;

    if (temp < No2)
    {
        temp = No2;
    }
    if (temp < No3)
    {
        temp = No3;
    }

    return temp;
}

int main()
{
    int iRet = Max(10, 20, 30);

    cout << iRet<<endl;

    float fRet = Max(10.2, 20.6, 30.8);

    cout << fRet;

    return 0;
}