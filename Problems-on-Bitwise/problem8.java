////////////////////////////////////////////////////////////////////////////
//
//   Accept number from user ,and if 27th bit is on return the number and
// if 27th bit is off ,first turn it on and then  return the number...........
// 
/////////////////////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.Scanner;


class Bitwise
{
    public int checkBit(int iNo)
    {
        int Mask=0X04000000;
        int Result=0;

        Result=iNo | Mask ;

        return Result;
        
    }

}


class program192 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number ");
        int value =sobj.nextInt();

        Bitwise bobj=new Bitwise();
        int iret = bobj.checkBit(value);
        System.out.println("Updated number is : " +iret);



        
    }
}
