///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Write a program which accept two numbers from user and display position of common ON bits 
// input : 10     15
// Output:- 2      4
// 
//  See book for dry run......
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.*;

class Bitwise
{
    int iValue1=0;
    int iValue2=0;

    public Bitwise(int ino1 , int ino2)                 // Parameterized constructor........
    {
        iValue1=ino1;
        iValue2=ino2;
    }

    public void countonbits()
    {
        int iMask=0x00000001;
        int iResult=0;

        

        int iNo=iValue1 & iValue2;

        for(int i=1;i<=32;i++)
        {
            iResult= iNo & iMask;
            if(iResult==iMask)
            {
                System.out.println("Common bits are at position" +i);
            }

            iMask=iMask<<1;
        }

        

    }

}



class program2_33
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first number");
        int iNo1=sobj.nextInt();

        System.out.println("Enter second number");
        int iNo2=sobj.nextInt();

        Bitwise bobj=new Bitwise(iNo1,iNo2);

        bobj.countonbits();

        



        

    }
}



