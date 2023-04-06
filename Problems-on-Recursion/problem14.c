// Write recursive program which display below pattern
//   a  b   c   d   e   f



#include <stdio.h>

void Display()
{
    
    static char Ch = 'a';

    if (Ch != 'f'+1)
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