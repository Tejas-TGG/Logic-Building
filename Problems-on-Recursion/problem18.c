// Write recursive program which display below pattern
//   input - 6
//  output:- A  B   C   D   E   F



#include <stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;
    static char ch = 'A';
    if (iCnt < iNo)
    {
        iCnt++;
        printf("%c\t", ch);
        ch++;
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