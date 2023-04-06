/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one character. Return frequency of that character.
// 
// Input:
// 
// "Marvellous Multi OS"
// 
// M
// 
// Output:
// 
// 2
// 
// Input:
// 
// "Marvellous Multi OS"
// 
// W
// 
// Output:
// 
// 0
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

int chkchar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (ch == *str)
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
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
    cout << "Frequency of charecter is\n"
         << iRet;

    return 0;
}