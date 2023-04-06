////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and off 7th bit of that
//
// number if it is on. Return modified number.
//
// Input: Output:
//
// 79 15
//////////////////////////////////////////////////////////////////////////////


import java.lang.*;
import java.util.*;

class BitWise
{
    public int OffBit(int iNo)
    {
        int iResult=0;
        int iMask=0X00000040;

        iResult=iNo ^ iMask;

        return iResult;

    }
}



class program1_31
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        int iValue=sobj.nextInt();

        BitWise bobj=new BitWise();
        int iRet=bobj.OffBit(iValue);

        System.out.println("Modified Number is: "+iRet);
    }
}