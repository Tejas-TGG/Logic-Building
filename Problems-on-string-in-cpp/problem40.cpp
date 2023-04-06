//////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and count number of small characters.
//
// Input:
//
// "Marvellous"
//
//Output- 9
/////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

int CountCapital(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            count++;
        }
        
        str++;
    }

    return count;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter string\n";
    cin.getline(Arr, 20);

    iRet = CountCapital(Arr);

    cout << "Number of small charecters in string are:\n"
         << iRet;

    return 0;
}