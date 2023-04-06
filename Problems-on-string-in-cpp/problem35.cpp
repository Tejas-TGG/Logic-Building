
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Accept character from user. If character is small display its corresponding capital character, 
// and if it small then display its corresponding capital. In other cases display as it is.
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;

        cout << ch;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;

        cout << ch;
    }
    else
    {
        cout << ch;
    }
}

int main()
{
    char Cvalue = '\0';

    cout << "Enter charecter\n";
    cin >> Cvalue;

    Display(Cvalue);

    return 0;
}