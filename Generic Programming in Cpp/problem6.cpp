// Write generic program for addition of 2 values

#include <iostream>
using namespace std;

int Addition(int A, int B)
{
    int iAns;
    iAns = A + B;

    return iAns;
}

int main()
{
    int No1 = 11, No2 = 21;
    int iRet = 0;

    iRet = Addition(No1, No2);

    cout << "Addition is \n"
         << iRet;

    return 0;
}