//  recursive

#include <stdio.h>

void Display(char *str)
{
    if (*str != '\0')
    {
        printf("%c\n", *str);

        Display(str++);         // Display(100)   Display(100)   Display(100)
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