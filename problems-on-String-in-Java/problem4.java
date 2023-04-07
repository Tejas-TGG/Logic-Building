// Accept string from user and count number of words in string of sentence......
//  These code works only when there is only one space between two words,..


import java.io.*;
import java.util.*;

class program301 {
    public static void main(String arg[]) 
    {
        int icnt=0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

       String arr[]=str.split(" ");

       System.out.println(arr.length);

       for(int i=0;i<arr.length;i++)
       {
            icnt++;
       }

       System.out.println("Number of words are "+icnt);                 
    }
}