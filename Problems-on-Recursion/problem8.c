//  Accept Array from user and perform addition of all elements
//  By recursive way

#include <stdio.h>

int Sum(int Arr[], int Size)
{
    static int iCnt = 0;
    static int isum = 0;

    if (iCnt < Size)
    {
        isum = isum + Arr[iCnt];
        iCnt++;

        Sum(Arr, Size);
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