///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy capital characters of that string into another string.
// 
// Input:
// 
// "Marvellous Multi OS"
// 
// Output:
// 
// "MMOS"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

void StrCpyCap(char *src, char *dest)
{
    while ((*src != '\0'))
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
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