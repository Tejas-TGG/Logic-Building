///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy that characters of that string into another string in reverse order.
//
// Input:
//
// "Marvellous Python"
//
// Output:
//
// "nohtyp suollevraM"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

void StrCpyCap(char *src, char *dest)
{
    char *end = src;

    while ((*end != '\0'))
    {
        end++;
    }

    end--;

    for (end; end >= src; end--, dest++)
    {
        *dest = *end;
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