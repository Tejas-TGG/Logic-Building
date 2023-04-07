// Accept string from user and count number of words in string of sentence......
// These code does not work if more than one white space at starting and ending of sentence....

import java.io.*;
import java.util.*;

class program302 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        String newstr=str.replaceAll("\\s+", " ");                    //  "\\s+" means replace more than one white space  into   " "  one white space....          

       String arr[]=newstr.split(" ");

       System.out.println("Number of words are"+arr.length);
    }
}