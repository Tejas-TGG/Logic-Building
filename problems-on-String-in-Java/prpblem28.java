import java.lang.*;
import java.util.*;

class StringDemo
{
    public String Strs;
    
    public StringDemo(String str)
    {
        Strs=str;
    }

    public void reverse()
    {
        StringBuffer sb =new StringBuffer(Strs);
        
        System.out.println(sb.reverse());
    }

    
}

class program5_47
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();

        StringDemo vobj=new StringDemo(str);

        vobj.reverse();

    }
}