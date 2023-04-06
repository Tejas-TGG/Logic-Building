

#include <stdio.h>

int Min(int iNo)
{
    static int iMax = 0;
    static int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;


        if (iDigit < iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;

        Min(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Min(iValue);
    printf("Minimum number is: %d", iRet);

    return 0;
}