////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and convert it into lower case.
//
// "Marvellous Multi OS"
//
// Input:
//
// Output:
//
// marvellous multi os
//
//////////////////////////////////////////////////////////////////////////////////////////////////// 


#include <iostream>
using namespace std;

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    cout << "Enter string:\n";
    cin.getline(Arr, 20);

    strlwrx(Arr);

    cout << "Modified string is \n"
         << Arr;

    return 0;
}