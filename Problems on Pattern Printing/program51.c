// Accept number of rows and number of columns from user and display below pattern

// Input :- iRow=4         iColumn=5
/*

Output :

    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;

    for (i = 1; i <= iRow; i++)
    {

        for (j = 1; j <= iCol; j++, iCnt++)
        {
            printf("%d\t", iCnt);
            if (iCnt >= 9)
            {
                iCnt = 0;
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
