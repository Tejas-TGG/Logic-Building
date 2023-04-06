/////////////////////////////////////////////////////////////////////////////////////
// 
// Write program which checks whether 7,8,9th bit is on or off.......
// 
///////////////////////////////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask=0X000001c0;
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



class program4_29
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