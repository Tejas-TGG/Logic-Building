// Accept string from user and count small charcter inside that string......

import java.io.*;
import java.util.*;

class program299 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();

        char arr[] = str.toCharArray(); // Conversion of string str to array

        System.out.println(arr.length);
    
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}