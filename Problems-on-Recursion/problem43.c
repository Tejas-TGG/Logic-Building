//  recursive

#include <stdio.h>

void Display(char *str)
{
    if (*str != '\0')
    {
        Display(str + 1); // Head recursion
        printf("%s\n", str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']S", Arr);

    Display(Arr); // Display(920)
    return 0;
}