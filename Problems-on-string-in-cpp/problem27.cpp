// Accept two string from user and compare them if they are same or not........

// Accept string  from user and

#include <iostream>
using namespace std;

bool strcmpx(char *source, char *dest)
{

    while (*source != '\0' && *dest != '\0')
    {

        if (*source != *dest)
        {
            break;
        }

        source++;
        dest++;
    }

    if (*source == '\0' && *dest == '\0')
    {
        return true;
    }
    
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet;

    cout << "Enter first string" << endl;
    cin.getline(Arr, 20);

    cout << "Enter first string" << endl;
    cin.getline(Brr, 20);

    bRet = strcmpx(Arr, Brr);

    if (bRet == true)
    {
        cout << "String are equal" << endl;
    }
    else
    {
        cout << "String are not equal" << endl;
    }

    return 0;
}
