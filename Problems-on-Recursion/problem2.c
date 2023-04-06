//  input-123
//  Output -3 2 1

#include <stdio.h>

void DisplayI(int no)
{

    while (no != 0)
    {
        printf("%d\t", no % 10);
        no = no / 10;
    }

    printf("\n");
}

void DisplayR(int ino)
{
    if (ino != 0)
    {
        printf("%d\t", ino % 10);
        ino = ino / 10;

        DisplayR(ino);
    }
}

int main()
{
    DisplayI(123);

    DisplayR(123);
    return 0;
}