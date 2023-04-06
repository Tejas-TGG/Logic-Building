///////////////////////////////////////////////////
// 
//  Accept number from user ,and toggle 4th bit
// 
///////////////////////////////////////////////////

import java.lang.*;
import java.util.Scanner;


class Bitwise
{
    public int checkBit(int iNo)
    {
        int Mask=0X00000008;
        int Result=0;

        Result=iNo ^ Mask ;

        return Result;
        
    }

}


class program193 {
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
