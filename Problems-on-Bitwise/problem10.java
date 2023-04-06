/////////////////////////////////////////////////////////////
// 
//  Accept number from user ,and tooggle 4th and 7th bit
// 
/////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.Scanner;


class Bitwise
{
    public int checkBit(int iNo)
    {
        int Mask=0X00000048;
        int Result=0;

        Result=iNo ^ Mask ;

        return Result;
        
    }

}


class program194 {
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
