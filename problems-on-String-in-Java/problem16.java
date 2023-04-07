// Accept two strings from user and display the frequency of each letter from that string.....



import java.io.*;
import java.util.*;

class program313 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        str=str.toLowerCase();                // filter- conversion of uppercase to lowercase

        char arr[]= str.toCharArray();

        int frequency[]=new int[26];

        int i=0;

        for( i=0;i<arr.length;i++)
        {
            if(arr[i]==' ')
            {
                continue;
            }
            frequency[arr[i]-'a']++;
        }

        for(i=0;i<frequency.length;i++)
        {
            if(frequency[i]>0)
            {
                System.out.println((char)(i+97)+":"+frequency[i]);
            }
        }

    }
}
