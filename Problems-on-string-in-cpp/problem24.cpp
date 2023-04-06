// // Accept string  from user and copy string to another string......

#include <iostream>
using namespace std;

void strcpy(char *source, char *dest) // source is full and dest is empty
{
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

    cout << "Enter string" << endl;
    cin.getline(Arr, 20);

    strcpy(Arr, Brr);

    cout << "String after copy :" << Brr << endl;
    return 0;
}

















// #include<iostream>
// using namespace std;

// void strcopy(char *source , char *dest)
// {
//     while(*source != '\0')
//     {
//         *dest=*source;
//         dest++;
//         source++;
//     }

//     *dest='\0';
// }


// int main()
// {

//     char Arr[20];
//     char Brr[20];


//     cout<<"Enter string"<<endl;

//     cin.getline(Arr,20);
//     cin.getline(Brr,20);

//     strcopy(Arr,Brr);
//     cout << "String after copy :" << Brr << endl;

//     return 0;
// }


















