//  Accept Array from user and perform addition of all elements


#include <stdio.h>

int Sum(int Arr[], int Size)
{
    int iCnt = 0;
    int isum = 0;

    while (iCnt < Size)
    {
        isum = isum + Arr[iCnt];
        iCnt++;
    }

    return isum;
}

int main()
{
    int Brr[] = {10, 20, 30, 40};
    int iRet = 0;

    iRet = Sum(Brr, 4);

    printf("Summation is : %d", iRet);

    return 0;
}