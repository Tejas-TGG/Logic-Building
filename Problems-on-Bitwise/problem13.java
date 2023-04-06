/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Accept number from user ,as well as position from user and  toggle the bit at that position 
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

import java.lang.*;
import java.util.Scanner;



class Bitwise
{
    public int ToggleBit(int iNo,int pos)
    {
        if((pos<=0)||(pos>=32))
        {
            System.out.println("Invalid position");
            return 0;
        }

        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(pos-1);

        iResult=iNo^iMask;

        return iResult;
    }

}


class program197 {
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int value =sobj.nextInt();

        System.out.println("Enter number ");
        int ipos =sobj.nextInt();

        Bitwise bobj=new Bitwise();

        int iret = bobj.ToggleBit(value,ipos);
        System.out.println("Updated number is : " +iret);
      



        
    }
}
