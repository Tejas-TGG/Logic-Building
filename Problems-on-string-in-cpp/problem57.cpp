///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy small characters of that string into another string.
// 
// Input:
// 
// "Marvellous multi OS"
// 
// Output:
// 
// "arvellous multi"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

void StrCpySmall(char *src, char *dest)
{
    while ((*src != '\0'))
    {
        if ((*src >= 'a') && (*src <= 'z'))
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
    StrCpySmall(Arr, Brr);

    cout << "Modified string is\n"
         << Brr;

    return 0;
}