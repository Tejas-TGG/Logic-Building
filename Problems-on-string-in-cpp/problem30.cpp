////////////////////////////////////////////////////////////////////////////////////////////
// 
// Acceept charecter from user and check whether it is capital or not
// 
// Input- F
// 
// output-true
// ///////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool checkcapital(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter charecter \n";
    cin >> cValue;

    bRet = checkcapital(cValue);

    if (bRet == true)
    {
        cout << "It is capital charecter\n";
    }

    else
    {
        cout << "It is not capital charecter\n";
    }

    return 0;
}