// Write recursive program which display below pattern
//   5  4   3   2   1

#include <stdio.h>

void Display()
{
    static int iCnt = 0;

    if (iCnt != 5)
    {
        iCnt++;
        Display();
        printf("%d\t", iCnt);                // Recursion by backtracking
        iCnt--;
    }
}

int main()
{

    Display();

    return 0;
}