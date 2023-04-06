/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept 2 strings from user and concat second string after first string. (Implement strcat() function).
//
// Input:
// 
// "Marvellous Infosystems"
// 
// "Logic Building"
// 
// Output:
//
// "Marvellous Infosystems Logic Building"
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

void StrCatx(char *src, char *dest)
{
    while (*src != '\0')
    {
        src++;
    }

    *src = ' ';
    src++;

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Infosystem";
    char Brr[30] = "Logic Building";

    StrCatx(Arr, Brr);

    cout << "Modified string is\n"
         << Arr;

    return 0;
}