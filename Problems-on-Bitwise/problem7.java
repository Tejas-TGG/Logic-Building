////////////////////////////////////////////////////////////////////////////////////
// 
//  Accept number from user ,and if 4th bit is on return the number and
// if 4th bit is off ,first turn it on and then  return the updated number...........
// 
// //////////////////////////////////////////////////////////////////////////////////


import java.lang.*;
import java.util.Scanner;


class Bitwise
{
    public int OnBit(int iNo)
    {
        int Mask=0X00000008;
        int Result=0;

        Result=iNo | Mask ;

        return Result;
        
    }

}


class program191 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number");
        int value =sobj.nextInt();

        Bitwise bobj=new Bitwise();
        int iret = bobj.OnBit(value);
        System.out.println("Updated number" +iret);



        
    }
}