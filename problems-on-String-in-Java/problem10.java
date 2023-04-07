//  Accept string from user and reverse that string in place.....



// 1St Approach:-
//  String arr is immutable so we cant reverse it or change the contents...



// import java.io.*;
// import java.util.*;

// class program307 {
//     public static void main(String arg[]) 
//     {
//         Scanner sobj = new Scanner(System.in);
//         System.out.println("Enter string");
//         String str = sobj.nextLine();


//         // String newstr=str.replaceAll("\\s+", " ");                    //  "\\s+" means replace more than one white space between two words  into   " "  one white space....          
//         // String newstr2=newstr.trim();                                                    // The trim() method removes whitespace from both ends of a string 
//         // String arr[]=newstr2.split(" ");                                           // Seperate is done by split method of sentence

//         // for(int i=0;i<arr.length;i++)
//         // {
//         //     StringBuffer sb= new StringBuffer(arr[i]);                                   // Convert string arr immutable into mutable......
//         //     System.out.print(sb.reverse());      
//         // }

       

        
//     }
// }








// 2nd approach

import java.io.*;
import java.util.*;

class program307 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        char crr[]=new char[str.length()];

        int end=(str.length())-1;       //13

        System.out.println(end);

        for(int i=0;i<str.length();i++)
        {
            crr[i]=str.charAt(i);
            
        }
        char temp='\0';

        for(int start=0;start<(end);start++,end--)
        {
            temp=crr[start];
            crr[start]=crr[end];
            crr[end]=temp;

        }
        for(int i=0;i<str.length();i++)
        {
            System.out.print(crr[i]);
            
        }
        System.out.println();

        // now conversion of char array to string:-
        
        String str1=new String(crr);

        System.out.println(crr);
       


        
    }
}