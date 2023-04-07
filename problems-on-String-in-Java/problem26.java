import java.lang.*;
import java.util.*;

class StringDemo
{
    public char brr[];
    
    public StringDemo(char Arr[])
    {
        brr=Arr;
    }

    public int SumDiff()
    {

        int iCnt=0;
        int iCount=0;
        int iDiff=0;

        for(int i=0;i<brr.length;i++)
        {
            if( (brr[i]>='a') && (brr[i]<='z') )
            {
                iCnt++;
            }

            if( (brr[i]>='A') && (brr[i]<='Z') )
            {
                iCount++;
            }

        }

        iDiff=iCnt-iCount;

        
        return iDiff;
    }
}

class program4_47
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();


        char arr[]=str.toCharArray();

        int iret=0;
        

        StringDemo vobj = new StringDemo(arr);

        iret=vobj.SumDiff();
        
        System.out.println("Difference of capital charecter and small charecter in string are "+iret);
    }
}