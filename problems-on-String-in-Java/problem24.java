import java.lang.*;
import java.util.*;


class program1_47
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();


        char arr[]=str.toCharArray();
        int iCnt=0;

        for(int i=0;i<arr.length;i++)
        {
            if( (arr[i]>='A') && (arr[i]<='Z') )
            {
                iCnt++;
            }

            
        }

        System.out.println("Number of capital charecter in string are "+iCnt);

    }
}