//  Accept number of rows and number of columns from user and display below pattern........

// Input:- Row = 6     Column=6

// Output:=

/*

 *       *       *       *       *       *
 *       #       #       #       *       *
 *       #       #       *       $       *
 *       #       *       $       $       *
 *       *       $       $       $       *
 *       *       *       *       *       *
  
 
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
        for (j = iCol; j >= 1; j--)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("*\t");
            }
            else if (i < j)
            {
                printf("#\t");
            }
            else if (i > j)
            {
                printf("$\t");
            }
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