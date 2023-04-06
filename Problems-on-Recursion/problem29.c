
//  Write recursive program which accept number from user and return its reverse number........


#include <stdio.h>

void Rev(int iNo)
{

    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d", iDigit);
        iNo = iNo / 10;

        Rev(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Rev(iValue);

    return 0;
}