////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy that characters of that string into another string by removing all white
//
// spaces.
//
// Input:
//
// "Marvel lous Python"
//
// Output:
//
// "MarvellousPython"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

void StrCpyCap(char *src, char *dest)
{
    while ((*src != '\0'))
    {
        if (*src == ' ')
        {
            src++;
            
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
    StrCpyCap(Arr, Brr);

    cout << "Modified string is\n"
         << Brr;

    return 0;
}