// Accept string from user and count number of small charecter from that string..........

#include <iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }

        str++;
    }

    return iCnt ;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter string" << endl;
    cin.getline(Arr, 20);

    iRet = CountCapital(Arr);
    cout << "count of small charecters in string is \n" << iRet << endl;
    return 0;
}
