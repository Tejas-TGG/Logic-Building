/////////////////////////////////////////////////////////////////////////////////
// Write generic program which accept one value and one number from user. Print
//
// that value that number of times on screen.
//
// Input:
//
// M
//
// 7
//
// Output: m    m   m   m   m   m   m
//
// Input:
//
// 11
//
// 3
//
// Output:
//
// 11   11  11
//
/////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template <class T>

void Display(T value,int isize)
{
    for(int icnt=1;icnt<=isize;icnt++)
    {
        cout<<value<<"\t";
    }

    cout<<endl;
}

int main()
{
    Display('m',7);
    Display(11,7);
    Display(3.7,7);

    return 0;
}