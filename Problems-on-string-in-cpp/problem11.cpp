// Accept string from user and count the 'l'  and 'L'  conatain in string..........

#include <iostream>
using namespace std;

int strlenX(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str == 'l') || (*str == 'L'))
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
    cout << "String contain 'l' and 'L' :" << iRet << " times" << endl;
    return 0;
}
