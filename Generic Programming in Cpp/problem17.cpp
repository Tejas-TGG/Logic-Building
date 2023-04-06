/////////////////////////////////////////////////////////////////////////////////////////////
// 
// Wriite generic program to multiply two numbers..............
// 
// /////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>

T multiply(T No1, T No2)
{
    T iAns = 0;
    iAns = No1 * No2;

    return iAns;
}

int main()
{

    int iRet = multiply(10, 20);
    cout<<"Multiplication of two number is:\n"<<iRet<<endl;

    float fRet = multiply(3.3,4.5);
    cout<<"Multiplication of two number is:\n"<<fRet;

    
    return 0;
}