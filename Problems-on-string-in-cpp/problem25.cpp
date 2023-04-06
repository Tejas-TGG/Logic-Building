// Accept string  from user and

#include <iostream>
using namespace std;

void strcatx(char *source, char *dest) 
{
    while (*dest != '\0')
    {
        dest++;
    }

    while (*source != '\0')
    {
        *dest = *source;

        source++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter first string" << endl;
    cin.getline(Arr, 20);

    cout << "Enter second string" << endl;
    cin.getline(Brr, 20);

    strcatx(Arr, Brr);

    cout << "String after concatination :" << Brr << endl;
    return 0;
}
