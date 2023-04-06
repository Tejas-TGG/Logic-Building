//  Accept two number from user and display  common on bits of that number




import java.lang.*;
import java.util.*;


public class program351
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number:");
        int iNo1=sobj.nextInt();

        System.out.println("Enter number:");
        int iNo2=sobj.nextInt();

        int iNo=iNo1 & iNo2 ;

        int iMask=0x00000001;
        int iResult=0;
    

        for(int i=1 ; i <=32 ; i++)
        {
            iResult= iNo & iMask;

            if(iResult==iMask)
            {
                System.out.println("Number of common on bits are "+i);
                
            }

            iMask=iMask<<1;

        }

    
        

    }
    
}
