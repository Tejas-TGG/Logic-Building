////////////////////////////////////////////////////////////////////////////////
// 
// Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal 
// and Octal representation of every member from 0 to 255.
// 
// //////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void DisplayASCII()
{
    int count = 0;
    int num = 0;
    while (count <= 255)
    {
        printf("charecter is %c:\n", count);
        printf("Decimal number of charecter is %d:\n", count);
        printf("octal number of charecter is %o:\n", count);
        printf("hexadecimal number of charecter is %x:\n", count);
        cout << endl;

        count++;
    }
}

int main()
{
    DisplayASCII();

    return 0;
}