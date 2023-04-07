// Accept two strings from user and display the frequency of each letter from that string.....

//  See dry run in notebook

// import java.io.*;
// import java.lang.*;
// import java.util.*;

// class program311 {
//     public static void main(String arg[]) 
//     {
//         Scanner sobj = new Scanner(System.in);
//         System.out.println("Enter string");
//         String str = sobj.nextLine();

//         char arr[]= str.toCharArray();

//         int frequency[]=new int[26];

//         int i=0;

//         for( i=0;i<arr.length;i++)
//         {
//             frequency[arr[i]-97]++;
//             System.out.println(frequency[i]);
//         }

//         for(i=0;i<frequency.length;i++)
//         {
//             System.out.println(frequency[i]);
//         }

//     }
// }


import java.lang.*;
import java.util.*;


class program311
{
    public static void main(String ars[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();

        String sptr=str.toLowerCase();

        char Arr[]=sptr.toCharArray();

        int frequency[]=new int[26];

        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]==' ')
            {
                continue;
            }
            frequency[Arr[i]-97]++;
        }

        System.out.println("Frequency of each letter is : ");

        for(int j=0;j<frequency.length;j++)
        {
            if(frequency[j]>0)
            {
                System.out.println( (char)((int)(j+97)) +":" +frequency[j]);
            }
        }



    }
}




// import java.lang.*;
// import java.util.*;




// class program311
// {
//     public static void main(String[] args) 
//     {
//         Scanner sobj=new Scanner(System.in);
//         System.out.println("Enter string");
//         String str=sobj.nextLine();

//        String str1=str.toLowerCase();

//        char crr[]=str1.toCharArray();

//        int frequency[]=new int[26];


//        for(int i=0;i<crr.length;i++)
//         {
//             frequency[crr[i]-'a']++;
//         }


//         for(int i=0;i<frequency.length;i++)
//         {
//             if(frequency[i]>0)
//             {
//                 System.out.println("The word of " +(char)((int)(i+97))+" Having its frequency is " +frequency[i] );
//             }
//         }

//     }
// }