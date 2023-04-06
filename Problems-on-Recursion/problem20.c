// // Write recursive program which display below pattern
//   input - 5
//  output:- 5  *   4   *   3   *   2   *   1   *


#include <stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;

    if (iCnt < iNo)
    {
        iCnt++;
        Display(iNo);
        printf("%d\t*\t", iCnt);
        iCnt--;
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