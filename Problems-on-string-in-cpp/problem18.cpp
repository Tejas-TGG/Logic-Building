// Accept string from user and count number of vovels in string..........

#include <iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    iRet = CountCapital(Arr);
    cout << "Number of vovels in string are \n"
         << iRet << endl;
    return 0;
}
