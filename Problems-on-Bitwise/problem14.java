//  Problems on bitwise operators...........
// Check 1st nibble is on or off
import java.lang.*;
import java.util.*;


public class program346 
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number:");
        int iNo=sobj.nextInt();


        int iMask=0x0000000f;
        int iResult=0;

        iResult=iNo&iMask;

        if(iResult==iMask)
        {
            System.out.println("First nible is completely on");
        }
        else
        {
            System.out.println("First nible is off");
        }

    }
    
}
