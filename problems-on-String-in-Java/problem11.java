//  Accept string from user and reverse that string in place.....

//  String arr is immutable so we cant reverse it or change the contents...



import java.io.*;
import java.util.*;

class program308 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        String newstr=str.replaceAll("\\s+", " ");                    //  "\\s+" means replace more than one white space between two words  into   " "  one white space....          
        String newstr2=newstr.trim();                                                    // The trim() method removes whitespace from both ends of a string 
        String arr[]=newstr2.split(" ");                                           // Seperate is done by split method of sentence

        StringBuffer finalstr=new StringBuffer();

        for(int i=0;i<arr.length;i++)
        {
            StringBuffer sb= new StringBuffer(arr[i]);                                   // Convert string arr immutable into mutable......
            finalstr.append((sb.reverse()).append(" "));
        }

       System.out.println(finalstr);
      
    }
}