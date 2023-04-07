import java.lang.*;
import java.util.*;

class ChkVovels
{
    public char brr[];

    public ChkVovels(char Arr[])
    {
        brr=Arr;
    }

    public boolean Checkvovel()
    {
        boolean bret=false;

        for(int i=0;i<brr.length;i++)
        {
            if( (brr[i]=='a') || (brr[i]=='e') ||(brr[i]=='i') ||(brr[i]=='o') ||(brr[i]=='u') ||(brr[i]=='A') ||(brr[i]=='E') ||(brr[i]=='I') || (brr[i]=='O') ||(brr[i]=='U'))
            {
                bret=true;

            }  

        }
        
        return bret;

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

        boolean iret=false;
        

        ChkVovels vobj = new ChkVovels(arr);

        iret=vobj.Checkvovel();

        if(iret==true)
        {
            System.out.println("Vovels are present in string");

        }
        else
        {
            System.out.println("Vovels are not present in string");

        }

    }
}