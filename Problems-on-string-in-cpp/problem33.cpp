////////////////////////////////////////////////////////////////////////////////////////////
// 
// Accept division of student from user and depends on the division display exam timing. 
// There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
// (Application should be case insensitive)
// 
// Input:C
// 
// Output: Your exam at 9.20 AM
// 
// Input: d
// 
// Output: Your exam at 10.30 AM
// ///////////////////////////////////////////////////////////////////////////////////////////




#include <iostream>
using namespace std;

void DisplaySchedule(char ch)
{
    if (ch == 'A' || ch == 'a')
    {
        cout << "Your exam at 7 AM \n";
    }
    else if (ch == 'B' || ch == 'b')
    {
        cout << "Your exam at 8.30 AM \n";
    }
    else if (ch == 'C' || ch == 'c')
    {
        cout << "Your exam at 9.20 AM \n";
    }
    else if (ch == 'D' || ch == 'd')
    {
        cout << "Your exam at 10.30 AM \n";
    }
    else
    {
        cout << "You had entered invalid division\n";
    }
}

int main()
{
    char cValue = '\0';

    cout << "Enter your division\n";
    cin >> cValue;

    DisplaySchedule(cValue);

    return 0;
}