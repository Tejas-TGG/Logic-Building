////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and display it inn
//
// return 0;
//
// reverse order.
//
// Input:
//
// "Marvellous"
//
// "SuollevraM"
//
// Output:
//////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void strrevx(char *str)
{

    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    for (end; end >= str; end--)
    {
        cout << *end;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter string" << endl;
    cin.getline(Arr, 20);

    strrevx(Arr);

    return 0;
}