// Write a program which accept string from user and toggle the case.
// 
// "Marvellous Multi OS"
// 
// Input:
// 
// Output:  MARVELLOUS MULTI os
//
///////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void struprx(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        else if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    cout << "Enter string:\n";
    cin.getline(Arr, 20);

    struprx(Arr);

    cout << "Modified string is \n"
         << Arr;

    return 0;
}