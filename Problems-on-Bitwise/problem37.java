////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number and position from user and on that bit. Return modified number.
//
// Input: 
//
// 10 3
//
//Output:
// 14
////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.lang.*;
import java.util.Scanner;

class Bitwise
{
    public int ChkBit(int iNo,int iPos)
    {
        int iResult=0;
        int iMask=0X00000001;

        int iShift=iMask<<(iPos-1);

        iResult=iNo ^  iShift;

        return iResult;

    

    }

}


class program3_32 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int value =sobj.nextInt();

        System.out.println("Enter Position ");
        int ipos =sobj.nextInt();

        Bitwise bobj=new Bitwise();

        int iret = bobj.ChkBit(value,ipos);

        System.out.println("Modified Number is:"+iret);
        
    
        
    }
}
