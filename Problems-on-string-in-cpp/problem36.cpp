///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept character from user. If it is capital then display all the characters from the input characters till Z. 
// If input character is small then print all the characters in reverse order till a. In other cases return directly.
// 
// Input: Q
// 
// output : Q R S T U V W X Y Z
// 
// Output: d
// 
// Output: d c b a
// 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void Display(char ch)
{

    if (ch >= 'A' && ch <= 'Z')
    {
        

        while(ch!='Z')
        {
             cout << ch << "\t";
             ch++;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (ch; ch >= 'a'; ch--)
        {
            cout << ch << "\t";
        }
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