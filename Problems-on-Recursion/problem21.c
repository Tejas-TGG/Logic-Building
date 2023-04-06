//  Write recursive program which accept number from user and return summation of its digits
//  input -879
//  output- 24

#include <stdio.h>

int SumR(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        SumR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = SumR(iValue);
    printf("Sum is: %d", iRet);

    return 0;
}