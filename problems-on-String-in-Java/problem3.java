// Accept string from user and count small charcter inside that string......

import java.io.*;
import java.util.*;

class program300 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        char arr[] = str.toCharArray(); // Conversion of string str to array
        int iCnt=0;
        for (int i = 0; i < arr.length; i++) 
        {

            if(arr[i]>='a'&&arr[i]<='z')
            {
                iCnt++;
            }

            

        }

        System.out.println("Number of small charecters in string are:"+iCnt);
    }
}