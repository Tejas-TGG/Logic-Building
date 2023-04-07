//  Accept two string from user and  check whether rotational string and main string is same or not..

//  input = Hello
//  Output = loHel

//  Solution: 

//  str3 = concate Hello     ie str3= HelloHello
//  if loHel is there in str3 ie in HelloHello  then return true and if not return false....

import java.lang.*;
import java.util.*;


public class program352
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first string:");
        String str1=sobj.nextLine();

        System.out.println("Enter rotated String:");
        String str2=sobj.nextLine();

        if(str1.length() != str2.length())                      // Filter
        {
            System.out.println("String are not in rotation");

            return;
        }

        String str3=  str1 + str2;              //str3= HelloHello

        if(str3.contains(str2))
        {
            System.out.println("String are in rotation");
        }

        else
        {
            System.out.println("String are not in rotation");
        }
        

    }
    
}
