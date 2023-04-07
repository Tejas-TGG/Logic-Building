// Accept string from user and display frequency of each charecter from that string...
// Use of #map

// input :Hellow@123
//  Output:         count
//          H        1
//          e        1
//          l        1
//          l        2
//          o        1
//          @        1
//          1        1
//          2        1
//          3        1
//          3        2



import java.lang.*;
import java.util.*;


public class program354
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first string:");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();


        HashMap<Character,Integer> hobj=new HashMap<>();

        int Frequency=0;

        for(int i=0;i<Arr.length;i++)                                           
        {
            if(hobj.containsKey(Arr[i]))
            {
                Frequency=hobj.get(Arr[i]);

                hobj.put(Arr[i], Frequency+1);
            }
            else
            {
                hobj.put(Arr[i], 1);
            }
        }



        

        System.out.println(hobj);

        

    }
    
}





