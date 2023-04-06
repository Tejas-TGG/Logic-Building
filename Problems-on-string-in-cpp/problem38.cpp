
////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//
// Input:
//
// Output:
//
// A
//
// Decimal
//
// 65
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display(char ch)
{
    printf("Decimal number of charecter is %d:\n", ch);
    printf("octal number of charecter is %o:\n", ch);
    printf("hexadecimal number of charecter is %x:\n", ch);
}

int main()
{
    char Cvalue = '\0';

    cout << "Enter charecter\n";
    cin >> Cvalue;

    Display(Cvalue);

    return 0;
}