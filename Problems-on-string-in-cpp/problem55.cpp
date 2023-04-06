////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy the contents of that string into another string.
//
// Input:
// 
// "Marvellous Multi OS"
// 
// 10
// 
// Output:
// 
// "Marvellous
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

void StrCpyx(char *src, char *dest, int iCnt)
{
    while ((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter string\n";
    cin.getline(Arr, 30);
    StrCpyx(Arr, Brr, 10);

    cout << "Modified string is\n"
         << Brr;

    return 0;
}