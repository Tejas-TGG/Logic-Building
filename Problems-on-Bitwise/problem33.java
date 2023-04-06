/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.
//
// Input: 137
//
// Output:
// 
//  713
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.lang.*;
import java.util.*;

class BitWise
{
    public int OffBit(int iNo)
    {
        int iResult=0;
        int iMask=0X00000240;

        iResult=iNo ^ iMask;

        return iResult;

    }
}



class program4_31
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