//  recursive

#include <stdio.h>

void Display(char *str)
{
    if (*str != '\0')
    {
        Display(++str);         // Head recursion
        printf("%c\n", *str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");      
    scanf("%[^'\n']S", Arr);

    Display(Arr);

    return 0;
}