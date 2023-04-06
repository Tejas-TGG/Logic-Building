// Write recursive program which display below pattern
//   A  B   C   D   E   F


#include <stdio.h>

void Display()
{
    
    static char Ch = 'A';

    if (Ch != 'F'+1)
    {
        printf("%c\t", Ch);
        Ch++;
        
        Display();
    }
}

int main()
{

    Display();

    return 0;
}