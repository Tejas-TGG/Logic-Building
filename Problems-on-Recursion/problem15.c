// Write recursive program which display below pattern
//   *  *   *   *   *



#include <stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;
    if (iCnt < iNo)
    {
        iCnt++;
        printf("*\t");

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