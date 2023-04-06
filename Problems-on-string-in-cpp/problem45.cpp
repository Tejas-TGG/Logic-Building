///////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and convert it into upper case.
// 
// Input:
// 
// "Marvellous Multi OS"
// 
// Output:
// 
// MARVELLOUS MULTI OS
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void struprx(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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