// Accept string from user and display frequency of word which comes maximum times from that string...
// Use of #map
//  Input:  Tej Tej Tej Tej
//  Output: Tej occurs 4 number of times.......



import java.lang.*;
import java.util.*;


public class program356
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string:");
        String str=sobj.nextLine();

        String Arr[] = str.split(" ");




        HashMap<String,Integer> hobj=new HashMap<>();

        int Frequency=0;

        for(String ch : Arr)                               // For each loop
        {
            if(hobj.containsKey(ch))
            {
                Frequency=hobj.get(ch);

                hobj.put(ch, Frequency+1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }

        Set<String>setobj = hobj.keySet();

        int iMax=0;
        String c=" ";
        
        for(String value : setobj)
        {

            if(hobj.get(value)>iMax)
            {
                iMax=hobj.get(value);
                c=value;
            }
        }

        System.out.println(c+" occures "+iMax+ " times ");

        

    }
    
}





