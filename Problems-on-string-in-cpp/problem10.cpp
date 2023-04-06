// Accept string from user and count number of letter on it.........

#include <iostream>
using namespace std;

int strlenX(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == 'l')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter string" << endl;
    cin.getline(Arr, 20);

    iRet = strlenX(Arr);
    cout << "String contain 'l':" << iRet << " times" << endl;
    return 0;
}
