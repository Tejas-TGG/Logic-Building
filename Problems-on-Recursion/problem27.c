//  write recursive program which accept string from user and count number of small charecters.....


#include <stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;
    if (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }

        Strlen(str + 1);
    }

    return iCount;
}

int main()
{
    int iREt = 0;
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']S", Arr);

    iREt = Strlen(Arr);
    printf("Number of white spaces are %d\n", iREt);
    return 0;
}