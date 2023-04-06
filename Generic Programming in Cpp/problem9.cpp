// Accept N number from user and display number

#include <iostream>
using namespace std;

template <class T>

void Display(T Arr[], int iCnt)
{
    int i = 0;
    for (i = 0; i < iCnt; i++)
    {
        cout << Arr[i] << endl;
    }
}

int main()
{
    int Brr[] = {10, 20, 30, 40, 50};

    Display(Brr, 5);

    float Frr[] = {10.11, 20.22, 30.33, 40.44, 50.55};

    Display(Frr, 5);

    return 0;
}