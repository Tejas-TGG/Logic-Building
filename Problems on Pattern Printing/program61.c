//  Accept number of rows and number of columns from user and display below pattern........

// Input:- Row = 4     Column=4

// Output:=

/*
    *
    *   *
    *   *   *
    *   *   *   *


*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow != iCol)
    {
        printf("Invalid Input :\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\t");
        }

        printf("\n");
    }
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    printf("Please number of rows :\n");
    scanf("%d", &iValue1);

    printf("Please number of Columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}