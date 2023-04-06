// Accept number of rows and number of columns from user and display below pattern

//  First approach for program 2........

// Input :- iRow=4         iColumn=4
/*

Output :

    A   B   c  D
    a   b   c  d
    A   B   c  D
    a   b   c  d

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    char Ucase = 'A';
    char Lcase = 'a';

    for (i = 1; i <= iRow; i++)
    {
        char ch1 = '\0';
        char ch2 = '\0';

        for (j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++, ch2++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch1);
            }
            else if (i % 2 == 0)
            {
                printf("%c\t", ch2);
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

// Time complexity :        O(n*n)