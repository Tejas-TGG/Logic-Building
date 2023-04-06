//////////////////////////////////////////////////////////////////////////////////
// 
// Write a program which accept one number from user and range of position from 
// user .Toggle all bites from range........
// 
// Alternate solution in comment below
/////////////////////////////////////////////////////////////////////////////////

// Solution 1:

import java.lang.*;
import java.util.*;

import javax.imageio.ImageIO;

class Bitwise {

    public int ToggleBit(int iNo, int iPos1, int iPos2) 
    {
        
        for (int i = iPos1; i <= iPos2; i++) 
        {
            int iMask = 0X00000001;
            iMask = iMask << (i - 1);
            iNo=iNo ^ iMask;
        }

        return iNo;

    }
}

class program5_33 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        System.out.print("Enter first position\n");
        int ipos1 = sobj.nextInt();

        System.out.print("Enter second position\n");
        int ipos2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.ToggleBit(iValue, ipos1, ipos2);
        System.out.println("updated number is "+iRet);

    }
}


// Solution 2:

// Check whether range of input bit is on or off

// import java.lang.*;
// import java.util.*;


// public class program5_33
// {
//     public static void main(String args[])
//     {
//         Scanner sobj=new Scanner(System.in);
//         System.out.println("Enter number:");
//         long iNo=sobj.nextInt();


//         System.out.println("Enter starting point");
//         int iStart=sobj.nextInt();

//         System.out.println("Enter ending point");
//         int iEnd=sobj.nextInt();

//         long iMask1=0xffffffff;
//         long iMask2=0xffffffff;

//         long iMask=0;

//         iMask1=iMask1<<(iStart-1);
//         iMask2=iMask2>>(32-iEnd);                    // for long datatype there are 64 bits

//         iMask=iMask1 & iMask2;



//         long iResult=0;

//         iResult=iNo & iMask ;

//         if(iResult==iNo)
//         {
//             System.out.println("Bits in range are on");
//         }
//         else
//         {
//             System.out.println("Bits in range are off");
//         }



        

//     }
    
// }

