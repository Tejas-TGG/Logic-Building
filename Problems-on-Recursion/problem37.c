#include <stdio.h>

void Display(char *str)
{
    while (*str != '\0')
    {
        printf("%c\n", *str);
        str++;
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