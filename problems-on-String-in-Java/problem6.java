// Accept string from user and count number of words in string of sentence...
//  right complete code........


import java.io.*;
import java.util.*;

class program303 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        String newstr=str.replaceAll("\\s+", " ");                    //  "\\s+" means replace more than one white space between two words into   " "  one white space....          
        String newstr2=newstr.trim();                                                    // The trim() method removes whitespace from both ends of a string 
       String arr[]=newstr2.split(" ");

       System.out.println("Number of words are"+arr.length);
    }
}