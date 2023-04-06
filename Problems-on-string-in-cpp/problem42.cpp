/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and check whether it contains vowels in it or not.
//
// Input:
//
// "marvellous"
//
// Output:
//
// TRUE
//
// Input:
//
// "Demo"
//
// Output:
//
// TRUE
//
// Input:
//
// "xyz"
//
// Output:
//
// FALSE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool CountCapital(char *str)
{
    bool BRET = false;

    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            BRET = true;
        }
        else
        {
            BRET;
        }
        str++;
    }

    return BRET;
}

int main()
{
    char Arr[20];
    bool bRet = 0;

    cout << "Enter string\n";
    cin.getline(Arr, 20);

    bRet = CountCapital(Arr);
    if (bRet == true)
    {
        cout << "String contains vovels in it\n";
    }
    else
    {
        cout << "String does not contain vovels in it\n";
    }

    return 0;
}