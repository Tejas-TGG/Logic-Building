// Write recursive program which display below pattern
//   1  2   3   4   5


#include <stdio.h>

void Display()
{
    static int iValue = 0;

    if (iValue < 5)
    {
        iValue++;
        printf("%d\t", iValue);

        Display();
    }
}

int main()
{

    Display();

    return 0;
}