// Accept N number from user and return max number

#include <iostream>
using namespace std;

int Display(int Arr[], int iCnt)
{
    int i = 0;
    int iMax = Arr[0];
    for (i = 0; i < iCnt; i++)
    {
        if (iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }

    return iMax;
}

int main()
{

    int Brr[] = {10, 20, 30, 40, 50};
    int iRet = 0;

    iRet=Display(Brr, 5);
    cout<<iRet;

    return 0;
}