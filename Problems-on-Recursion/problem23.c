
//  Find factorial of number...........
// Input = 4*3*2*1
// Output =24

#include <stdio.h>

int FactorialR(int iNo)
{
    static int iMult = 1;

    if (iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;

        FactorialR(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = FactorialR(iValue);
    printf("Factorial is : %d \n", iRet);

    return 0;
}