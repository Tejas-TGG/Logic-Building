// Check whether range of input bit is on or off

import java.lang.*;
import java.util.*;


public class program348
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number:");
        long iNo=sobj.nextInt();


        System.out.println("Enter starting point");
        int iStart=sobj.nextInt();

        System.out.println("Enter ending point");
        int iEnd=sobj.nextInt();

        long iMask1=0xffffffff;
        long iMask2=0xffffffff;

        long iMask=0;

        iMask1=iMask1<<(iStart-1);
        iMask2=iMask2>>(32-iEnd);                    // for long datatype there are 64 bits

        iMask=iMask1 & iMask2;



        long iResult=0;

        iResult=iNo & iMask ;

        if(iResult==iNo)
        {
            System.out.println("Bits in range are on");
        }
        else
        {
            System.out.println("Bits in range are off");
        }



        

    }
    
}
