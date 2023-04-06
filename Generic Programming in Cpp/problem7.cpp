// Write generic program for addition of 2 values

#include <iostream>
using namespace std;

template <class T>

T Addition(T A, T B)
{
    T iAns;
    iAns = A + B;

    return iAns;
}

int main()
{
    int No1 = 11, No2 = 21;
    int iRet = 0;

    iRet = Addition(No1, No2);

    cout << "Addition is "
         << iRet<<endl;



    float fNo1 = 11.2, fNo2 = 21.7;
    float fRet = 0;

    fRet = Addition(fNo1, fNo2);

    cout << "Addition is "
         << fRet<<endl;

    return 0;
}