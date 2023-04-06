//  Accept Array from user and perform addition of all elements
//  By recursive way

#include <stdio.h>

int Sum(int Arr[], int Size)
{

    static int isum = 0;

    if (Size > 0)
    {
        isum = isum + Arr[Size - 1];
        Size--;

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