
///////////////////////////////////////////////////////////////////////////////////////
// 
// Write a program which accept one number , and two positions from user and check whether
// bit at first or bit at second position is on or off.........
// 
//  Input- 10   2   4
//  Ouput- true
// 
//////////////////////////////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo , int iPos1 , int iPos2)
    {
        int Mask1=0X00000001;
        int Mask2=0X00000001;
        int iResult1=0;
        int iResult2=0;

        Mask1=Mask1<<(iPos1-1);
        Mask2=Mask2<<(iPos2-1);

        iResult1=iNo & Mask1;
        iResult2=iNo & Mask2;
        if(iResult1 ==0 || iResult2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }

    }
}

class program4_33 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        System.out.print("Enter first position\n");
        int ipos1 = sobj.nextInt();

        System.out.print("Enter second position\n");
        int ipos2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bRet = bobj.ChkBit(iValue, ipos1, ipos2);
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