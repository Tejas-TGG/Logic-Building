///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Write a program which accept one number from user and count number of ON bits in it without using % or / operator
// 
// input : 11
// Output:- 3 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.*;

class Bitwise
{
    int iValue=0;

    public Bitwise(int ino)                 // Parameterized constructor........
    {
        iValue=ino;
    }
    public int countonbits()
    {
        int iMask=0x00000001;
        int iResult=0;

        int iCnt=0;

        for(int i=1;i<=32;i++)
        {
            iResult=iValue & iMask;
            if(iResult==iMask)
            {
                iCnt++;
            }

            iMask=iMask<<1;
        }

        return iCnt;

    }

}



class program1_33
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        int iNo=sobj.nextInt();

        Bitwise bobj=new Bitwise(iNo);

        int iRet=bobj.countonbits();

        System.out.println("Number of on bits are"+iRet);



        

    }
}



