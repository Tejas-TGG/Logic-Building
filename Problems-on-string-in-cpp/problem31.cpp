////////////////////////////////////////////////////////////////////////////////////////////
// 
// Acceept charecter from user and check whether its is digit or not
// 
// Input- 7
// 
// output-true
// ///////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool checkcapital(char ch)
{

    bool bret = false;

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        bret;
    }

    else
    {
        bret = true;
    }

    return bret;
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
        cout << "It is Digit\n";
    }

    else
    {
        cout << "It is not Digit\n";
    }

    return 0;
}
