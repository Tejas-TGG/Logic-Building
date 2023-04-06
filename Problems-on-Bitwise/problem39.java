///////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and toggle contents of first and 
// last nibble of the number. Return modified number. (Nibble is a group of four bits)
///////////////////////////////////////////////////////////////////////////////////////



import java.lang.*;
import java.util.Scanner;

class Bitwise
{
    public int ChkBit(int iNo)
    {
        int iResult=0;
        int iMask=0Xf000000f;

        iResult=iNo ^ iMask;

        return iResult;

    

    }

}


class program5_32 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int value =sobj.nextInt();

        Bitwise bobj=new Bitwise();

        int iret = bobj.ChkBit(value);

        System.out.println("Modified Number is:"+iret);
        
    
        
    }
}
