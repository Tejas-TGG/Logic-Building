// ///////////////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept string from user and display only digits from that string.
// 
// Input:
// 
// Output:
// 
// "marve89|lous121"
// 
// 89121
// 
// Input:
// 
// "Demo"
// 
// Output:
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            cout << "";
        }

        else if ((*str >= 'a') && (*str <= 'z'))
        {
            cout << "";
        }
        else
        {
            cout << *str;
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    cout << "Enter string:\n";
    cin.getline(Arr, 20);

    DisplayDigit(Arr);

    return 0;
}