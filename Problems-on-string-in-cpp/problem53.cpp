//////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user reverse that string in place.
// 
// Input:
// 
// "abcd"
// 
// Output:
// 
// "dcba"
// 
// Input:
// 
// "abba"
// 
// Output:
// 
// "abba"
/////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while (*end != '\0')
    {
        end++;
    }
    end--;

    for (start; start <= end; start++, end--)
    {
        temp = *start;
        *start = *end;
        *end = temp;
    }
}

int main()
{

    char Arr[20];

    cout << "Enter string\n";
    cin.getline(Arr, 20);

    StrRevX(Arr);
    cout << "Modified string is\n"
         << Arr;

    return 0;
}