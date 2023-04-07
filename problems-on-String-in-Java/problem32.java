//  Accept string from and display pattern
//  Input:
//          Hello

/*
    output:
     
    H  
    H   e   
    H   e   l   
    H   e   l   l   
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l 
    H   e   l 
    H   e
    H   
    
 
 */


import java.lang.*;
import java.util.*;

import javax.swing.Icon;



class program340
{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter string");

       String str=sobj.nextLine();

       char Arr[]=str.toCharArray();
       
       System.out.println(Arr.length);

       for(int i=0;i<Arr.length;i++)
       {
            for(int j=0;j<=i;j++)
            {
                System.out.print(Arr[j]+"  ");
            }

            System.out.println();
       }

       for(int i=(Arr.length)-1;i>=0;i--)
       {
            for(int j=0;j<=i;j++)
            {
                System.out.print(Arr[j]+"  ");
            }

            System.out.println();
       }

   
    // for(int i=(Arr.length)-1;i>=0;i--)
    // {
    //      for(int j=0;j<i;j++)
    //      {
    //          System.out.print(Arr[j]+"  ");
    //      }

    //      System.out.println();
    // }

    }
}