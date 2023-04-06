// Accept N number from user and return max number using generic coding

#include <iostream>
using namespace std;

template <class T>

T Display(T *Arr, int iCnt)
{
    int i = 0;
    T iMax = Arr[0];
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
    cout<<iRet<<endl;


    float Frr[] = {10.11, 20.22, 30.33, 40.44, 50.55};
    float fRet=0.0;


    fRet=Display(Frr, 5);
    cout<<fRet<<endl;

    return 0;
}