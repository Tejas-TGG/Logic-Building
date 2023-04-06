////////////////////////////////////////////////////////////////////////////////////////////
// 
// Acceept charecter from user and check whether its is small case or not
// 
// Input- g
// 
// output-true
// ///////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool checkcapital(char ch)
{
    if (ch >= 'a' && ch <= 'z')
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
        cout << "It is small case charecter\n";
    }

    else
    {
        cout << "It is not a small case charecter\n";
    }

    return 0;
}