//  Accept string from and display pattern
//  Input:
//          79959

/*
    output:
     
    7+9+9+5+9=39
    3+9      =12
    1+2      =3


    output=3;


    

 
 */

import java.lang.*;
import java.util.*;

import javax.swing.Icon;

class program345 
{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter the number");

       int ino=sobj.nextInt();

       int isum=0;
       int iDigit=0;

       while(true)
       {
          while(ino!=0)
           {
             iDigit=ino%10;
             isum=isum+iDigit;
             ino=ino/10;
   
           }
   
           ino=isum;
           isum=0;
           if(ino<10)
           {
               break;
           }
       }
    

       System.out.println("output is"+ino);

    }
}