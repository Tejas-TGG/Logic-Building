////////////////////////////////////////////////////////////////////////////////
// 
// Write a program which accept one number from user and check 
// whether 9th and 12th bit is on or off.......
// 
//  Input -257
//  Output -True
///////////////////////////////////////////////////////////////////////////////


import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask=0X00000900;
        int iResult=0;

        iResult=iNo&iMask;
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



class program3_33
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        int iValue=sobj.nextInt();


        Bitwise bobj=new Bitwise();
        boolean bRet=bobj.ChkBit(iValue);

        if(bRet==true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }


    }
}