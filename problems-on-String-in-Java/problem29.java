//  Accept string from and display pattern
//  Input:
//          Hello

/*
    output:
     
    H   H   H   H   H
    e   e   e   e   e
    l   l   l   l   l
    l   l   l   l   l
    o   o   o   o   o
    
 
 */


import java.lang.*;
import java.util.*;

import javax.swing.Icon;



class program337
{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter string");

       String str=sobj.nextLine();

       char Arr[]=str.toCharArray();

       for(int i=0;i<Arr.length;i++)
       {
            for(int j=0;j<Arr.length;j++)
            {
                System.out.print(Arr[i]+"  ");
            }

            System.out.println();
       }


    }
}