// Write recursive program which display below pattern
//   *   *   *   *   *

#include <stdio.h>

void Display()
{
    static int iValue = 0;

    if (iValue < 5)
    {
        printf("*\t");
        iValue++;
        Display();
    }
}

int main()
{

    Display();

    return 0;
}