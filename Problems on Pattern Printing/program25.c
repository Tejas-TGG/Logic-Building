// Input:- Row = 4     Column=4

// Output:=

/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D


*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for (i = 1; i <= iRow; i++)
    {
            //      1            2           3
        for (j = 1, ch = 'A'; j <= iCol ; j++, ch++)
        {
            printf("%c\t", ch);
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

    Display(iValue1, iValue2);

    return 0;
}
