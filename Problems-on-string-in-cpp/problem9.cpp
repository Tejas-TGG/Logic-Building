// // Accept string from user and count number of letters on it.........

// #include <iostream>
// using namespace std;

// int strlenX(char str[])
// {
//     int iCnt = 0;

//     while (*str != '\0')
//     {
//         iCnt++;
//         str++;
//     }
//     return iCnt;
// }

// int main()
// {
//     char Arr[20];
//     int iRet = 0;

//     cout << "Enter string" << endl;
//     cin.getline(Arr, 20);

//     iRet = strlenX(Arr);
//     cout << "String length is :" << iRet << endl;
//     return 0;
// }


// // Accept string from user and concat 2nd string after 1st string.........


#include<iostream>

using namespace std;

void strcat(char *str1 , char * str2 ,char * dest)
{

    while((*str1)!='\0')
    {
        if(*str1==' ')
        {
            *dest=' ';
            dest++;
            str1++;
            continue;
        }
        *dest=*str1;
        dest++;
        str1++;
    }

    (*dest)=' ';
    dest++;

    while(*str2!='\0')
    {
        (*dest)=(*str2);
        dest++;
        str2++;
    }

    *dest='\0';
    
    

}

int main()
{
    string str1="\0";
    string str2="\0";

    cout<<"Enter first string\n";
    cin>>str1;

    cout<<"Enter second string\n";
    cin>>str2;

    char * crr1 = new char[str1.length()+1];                                  //+1 for '\0' as in cpp string contain '\0' at end
    char * crr2 = new char[str2.length()+1];    
    
    char * crr3=new char[(str1.length()+str2.length())+2];                              //+1 for '\0' as in cpp string contain '\0' at end


    int i=0;
    for(i=0;i<str1.length();i++)
    {
        crr1[i]=str1[i];
    }

    crr1[i]='\0';                           //  in cpp string contain '\0' at end



    for(i=0;i<str2.length();i++)
    {
        crr2[i]=str2[i];
    }

    crr2[i]='\0';                           //  in cpp string contain '\0' at end

   
    strcat(crr1,crr2,crr3);

    cout<<"String after concat is "<<crr3;

    return 0;
}

