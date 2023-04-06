////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy that characters of that string into another string by toggling the case.
// 
// Input:
// 
// "Marvellous Python 2"
// 
// Output:
// 
// "MARVELLOUS PYTHON 2"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

void StrCpyToggle(char *src, char *dest)
{
    while ((*src != '\0'))
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
        }

        else if ((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;
        }

        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter string\n";
    cin.getline(Arr, 30);
    StrCpyToggle(Arr, Brr);

    cout << "Modified string is\n"
         << Brr;

    return 0;
}