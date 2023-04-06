//  By recursive way............

#include <stdio.h>

void Display(int iNo)
{
    static int i = 0;
    static char ch = 'a';

    if (i < iNo)
    {
        printf("%c\t", ch);
        i++;
        ch++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}