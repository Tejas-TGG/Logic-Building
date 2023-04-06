// Accept string from user and convert string in toggle ie string in uppercase to lowercase and lowercase to uppercase in string..........

#include <iostream>
using namespace std;

void struprx(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        else if ((*str >= 'A') && (*str <= 'Z'))
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

    struprx(Arr);

    cout << "String in toggle :" << Arr << endl;
    return 0;
}
