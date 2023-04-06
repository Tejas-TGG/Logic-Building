/////////////////////////////////////////////////////////////////////////////////////
// 
// Write program which checks whether 15th bit is on or off.......
// 
///////////////////////////////////////////////////////////////////////////////////////


import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iResult=0;
        int iMask= 0X00004000;

        iResult= iNo & iMask;

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



class program1_30
{
     public static void main(String[] args) 
    {
        Scanner sobj= new Scanner(System.in);
        System.out.println("Enter number");
        int value=sobj.nextInt();

        Bitwise bobj=new Bitwise();
        boolean bRet=bobj.ChkBit(value);

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