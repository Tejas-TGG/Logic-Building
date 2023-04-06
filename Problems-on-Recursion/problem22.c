//  Write recursive program which accept string from user and count number of charecters...
// input:- Hello
//  output:- 5

#include <stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;
    if (*str != '\0')
    {

        iCount++;
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
    printf("Number of charecter are %d\n", iREt);
    return 0;
}