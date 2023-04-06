// Write recursive program which display below pattern
//   1  2   3   4   5



#include <stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;
    if (iCnt < iNo)
    {
        iCnt++;
        printf("%d\t", iCnt);

        Display(iNo);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number:");
    scanf("%d", &ivalue);

    Display(ivalue);

    return 0;
}