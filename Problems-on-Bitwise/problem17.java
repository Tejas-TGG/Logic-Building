//  Accept number from user and count number of on bits of that number




import java.lang.*;
import java.util.*;


public class program349
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number:");
        int iNo=sobj.nextInt();

        int iMask=0x00000001;
        int iResult=0;

        for(int i=1 ; i <=32 ; i++)
        {
            iResult= iNo & iMask;

            if(iResult==iMask)
            {
                System.out.println(i);
            }

            iMask=iMask<<1;

        }



        

    }
    
}
