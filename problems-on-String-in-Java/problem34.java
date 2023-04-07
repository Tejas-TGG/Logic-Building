//  Accept string from and display pattern
//  Input:
//          78956

/*
    output:
     
    7   8   9   5   6
    7   8   9   5   6
    7   8   9   5   6
    7   8   9   5   6
    7   8   9   5   6
 
 */


import java.lang.*;
import java.util.*;

import javax.swing.Icon;



class program342
{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter the number");

       int ino=sobj.nextInt();

    //    String str = Integer.toString(ino);

       char Arr[]= (Integer.toString(ino)).toCharArray();

       for(int i=0;i<Arr.length;i++)
       {
            for(int j=0;j<Arr.length;j++)
            {
                System.out.print(Arr[j]+"  ");
            }

            System.out.println();
       }

        
    

    }
}