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
    
 
 */


import java.lang.*;
import java.util.*;

import javax.swing.Icon;



class program338
{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter string");

       String str=sobj.nextLine();

       char Arr[]=str.toCharArray();

    //    for(int i=0;i<Arr.length;i++)
    //    {
    //         for(int j=0;j<=i;j++)
    //         {
    //             System.out.print(Arr[j]+"  ");
    //         }

    //         System.out.println();
    //    }


    for(int i=0;i<Arr.length;i++)
    {
        for(int j=0;j<=i;j++)
        {
            System.out.print(Arr[j]+"\t");
        }
        System.out.println();
    }


    }
}