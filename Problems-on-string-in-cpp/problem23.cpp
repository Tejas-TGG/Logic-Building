// Accept string  from user and reverse in place  ie without chnaging memory loacation for string

// #include <iostream>
// using namespace std;

// void strrevx(char *str)
// {
//     char *start = str;
//     char *end = str;
//     char temp;

//     while (*end != '\0')
//     {
//         end++;
//     }
//     end--;

//     while (start < end)
//     {
//         temp = *start;
//         *start = *end;
//         *end = temp;

//         start++;
//         end--;
//     }
// }

// int main()
// {
//     char Arr[20];
//     int iRet = 0;

//     cout << "Enter string" << endl;
//     cin.getline(Arr, 20);

//     strrevx(Arr);

//     cout << "String in toggle :" << Arr << endl;
//     return 0;
// }


#include<iostream>
using namespace std;

void strrev(char *str)
{
    char *start=str;
    char *end=str;
    char temp='\0';

    while(*end!='\0')
    {
        end++;

    }

    end--;

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;

    }


}

int main()
{
    char Arr[20];

    cout<<"Enter string\n";
    cin.getline(Arr,20);

    strrev(Arr);

    cout<<"string after reverse is\n"<<Arr;



    return 0;
}