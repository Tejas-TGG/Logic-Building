/////////////////////////////////////////////////////////////////////
// 
//  Accept number from user ,and check whether 3rd bit is on or off
// 
// 
/////////////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.Scanner;


class Bitwise
{
    public boolean checkBit(int iNo)
    {
        int Mask=4;
        int Result=0;

        Result=iNo & Mask;

        if(Result==0)
        {
            return false;
        }

        else
        {
            return true;
        }

        
    }

}


class program186 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number");
        int value =sobj.nextInt();

        Bitwise bobj=new Bitwise();
        boolean bret = bobj.checkBit(value);

        if (bret==true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }
        
    }
}






















