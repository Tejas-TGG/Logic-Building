// Accept string from user and convert string in uppercase to lowercase in string..........

#include <iostream>
using namespace std;

void strlwr(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter string" << endl;
    cin.getline(Arr, 20);

    strlwr(Arr);

    cout << "String in lower case :" << Arr << endl;
    return 0;
}
