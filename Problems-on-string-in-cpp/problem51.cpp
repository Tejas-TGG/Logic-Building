// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
// 
// Input:
// 
// "Marvellous Multi OS"
// 
// M
// 
// Output:
// 
// 0
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int chkchar(char *str, char ch)
{
    int ipos = 0;

    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;

        if (*str == ch)
        {
            break;
        }

        str++;
    }

    return iCnt - 1;
}

int main()
{
    int iRet = 0;
    char Arr[20];
    char cValue = '\0';

    cout << "Enter string\n";
    cin.getline(Arr, 20);

    cout << "Enter charecter:\n";
    cin >> cValue;

    iRet = chkchar(Arr, cValue);
    cout << "charecter location is\n"
         << iRet;

    return 0;
}