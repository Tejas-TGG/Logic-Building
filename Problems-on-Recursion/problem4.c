//  Problems on Recursion continue....................

//  Find factorial of number...........
// Input = 4*3*2*1
// Output =24

#include <stdio.h>

int Factorial(int iNo)
{
    auto int iMult = 1;
    while (iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %d \n", iRet);

    return 0;
}