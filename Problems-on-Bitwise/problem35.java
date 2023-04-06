////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number and position from user and check whether bit at that position is on or off. 
//If bit is on return TURE otherwise return FALSE.
//
// Input:  10 2
//
// Output: TRUE
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(int iNo,int iPos)
    {
        int iResult=0;
        int iMask=0X00000001;

        int iShift=iMask<<(iPos-1);

        iResult=iNo&iShift;

        if(iResult==0)
        {
            return false;
        }
        else
        {
            return true;
        }

        


    }

}


class program1_32 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int value =sobj.nextInt();

        System.out.println("Enter Position ");
        int ipos =sobj.nextInt();

        Bitwise bobj=new Bitwise();

        boolean bret = bobj.ChkBit(value,ipos);

        if(bret==true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }
        
    
        
    }
}
