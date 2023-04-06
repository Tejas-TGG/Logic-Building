//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy the contents of that string into another string.
//
// Input:
//
// "Marvellous Multi OS"
//
// Output:
//
// "Marvellous Multi OS"
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void StrCpyx(char *src, char *dest)
{
    while (*src != '\0')
    {
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
    StrCpyx(Arr, Brr);

    cout << "Modified string is\n"
         << Brr;

    return 0;
}