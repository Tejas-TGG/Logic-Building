// Accept string from user and display word which has maximum charecter , from sentence of string....



import java.io.*;
import java.util.*;

class program306 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        String newstr=str.replaceAll("\\s+", " ");                    //  "\\s+" means replace more than one white space between two words  into   " "  one white space....          
        String newstr2=newstr.trim();                                                    // The trim() method removes whitespace from both ends of a string 
       String arr[]=newstr2.split(" ");

       int max=0;
        int iPos=0;                    // Taken to present index for maximum word.....


       for (int i=0;i<arr.length;i++)
       {
         if(arr[i].length()>max)
         {
            max=arr[i].length();

            iPos=i;
         }
       }

       System.out.println("Length of largest word is :"+max);
       System.out.println("largest word is :"+arr[iPos]);
    }
}