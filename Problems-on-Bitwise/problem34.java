/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and on its first 4 bits. Return modified number.
//
// Input: 73 Output: 79
//////////////////////////////////////////////////////////////////////////////////////////////////////


import java.lang.*;
import java.util.*;

class BitWise
{
    public int OffBit(int iNo)
    {
        int iResult=0;
        int iMask=0X0000000f;

        iResult=iNo | iMask;

        return iResult;

    }
}



class program5_31
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