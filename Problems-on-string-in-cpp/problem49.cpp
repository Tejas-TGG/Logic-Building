/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
//
// Input:
// 
// "Marvellous Multi OS"
// 
// e
// 
// TRUE
// 
// Output:
// 
// "Marvellous Multi OS"
// 
// Input:
// 
// W
// 
// Output:
// 
// FALSE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

bool chkchar(char *str, char ch)
{
    bool bret = false;

    while (*str != '\0')
    {
        if (ch == *str)
        {
            bret = true;
        }
        else
        {
            bret;
        }

        str++;
    }

    return bret;
}

int main()
{
    bool bRet = false;
    char Arr[20];
    char cValue = '\0';

    cout << "Enter string\n";
    cin.getline(Arr, 20);

    cout << "Enter charecter:\n";
    cin >> cValue;

    bRet = chkchar(Arr, cValue);

    if (bRet == true)
    {
        cout << "Charecter found\n";
    }
    else
    {
        cout << "Charecter not found\n";
    }

    return 0;
}