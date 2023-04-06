// /////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
// 
// Input: %
// 
// Output: TRUE
// 
// Input: d
// 
// Output: FALSE
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

bool Display(char ch)
{
    bool bret = false;

    if ((ch >= '!' && ch <= '/') || (ch >= ':' && ch <= '@') || (ch >= '[' && ch <= '`') || (ch >= '{' && ch <= '}'))
    {
        bret = true;
    }
    else
    {
        bret;
    }

    return bret;
}

int main()
{
    char Cvalue = '\0';
    bool bRet = false;

    cout << "Enter charecter\n";
    cin >> Cvalue;

    bRet = Display(Cvalue);

    if (bRet == true)
    {
        cout << "It is special charecter\n";
    }
    else
    {
        cout << "It is not special charecter\n";
    }

    return 0;
}