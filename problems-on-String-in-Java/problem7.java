// Accept string from user and display each word  from sentence of string....



import java.io.*;
import java.util.*;

class program304 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        String newstr=str.replaceAll("\\s+", " ");                    //  "\\s+" means replace more than one white space between two words  into   " "  one white space....          
        String newstr2=newstr.trim();                                                    // The trim() method removes whitespace from both ends of a string 
       String arr[]=newstr2.split(" ");

       for (int i=0;i<arr.length;i++)
       {
        System.out.println(arr[i]);
       }
    }
}