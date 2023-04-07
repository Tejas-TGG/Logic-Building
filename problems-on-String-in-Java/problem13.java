// // Accept two strings from user and display the frequency of each letter from that string.....



// import java.io.*;
// import java.util.*;

// class program310 {
//     public static void main(String arg[]) 
//     {
//         Scanner sobj = new Scanner(System.in);
//         System.out.println("Enter string");
//         String str = sobj.nextLine();

//         char arr[]= str.toCharArray();

//         int frequency[]=new int[26];

//         for(int i=0;i<arr.length;i++)
//         {
//             frequency[arr[i]-97]++;
//         }

//     }
// }


// Conversion of string from uppercase to lowercase

import java.lang.*;
import java.util.*;


class program310
{
    public static void main(String ars[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        for(int i=0 ;i<Arr.length;i++)
        {
            if(Arr[i]>='A' && Arr[i]<='Z')
            {
                Arr[i]=(char)((int) Arr[i]+32);
            }

            System.out.print(Arr[i]);
        }
    }
}
