///////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and return difference between frequency of 
//small characters and frequency of capital characters.
//
// Input:
//
// "Marvellous"
//
// Output:
//
// 6 (8-2)
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int CountCapital(char *str)
{
    int count = 0;
    int iCnt = 0;
    int iDiff = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            count++;
        }

        else if (*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }

        str++;
    }

    iDiff = iCnt - count;

    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter string\n";
    cin.getline(Arr, 20);

    iRet = CountCapital(Arr);

    cout << "Difference between frequency of small charecter and capital charecter is:\n"
         << iRet;

    return 0;
}