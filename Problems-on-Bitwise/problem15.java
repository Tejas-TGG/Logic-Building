// Check whether 1st and last nibble is on or off

import java.lang.*;
import java.util.*;


public class program347
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number:");
        int iNo=sobj.nextInt();


        long iMask=0xf000000f;
        long iResult=0;

        iResult=iNo&iMask;

        if(iResult==iMask)
        {
            System.out.println("First nible and last nible is completely on");
        }
        else
        {
            System.out.println("First nible and last nible is off");
        }

    }
    
}
