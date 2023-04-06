// Accept number of rows and number of columns from user and display below pattern

// Input :- iRow=4         iColumn=5
/*

Output :

    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    

    for (i = 1; i <= iRow; i++)
    {
        char ch = '\0';

        for (j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch);
            }
            else if (i % 2 == 0)
            {

                printf("%d\t", j);
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
