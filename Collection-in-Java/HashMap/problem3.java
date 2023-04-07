// Accept string from user and display frequency of charecter which comes maximum times from that string...
// Use of #map
// See diagram in book.......

// input :Hellow@@@1233
//         keys         count
//          H        1
//          e        1
//          l        1
//          l        2
//          o        1
//          @        1
//          @        2
//          @        3
//          1        1
//          2        1
//          3        1
//          3        2


// output    @ --> 3




import java.lang.*;
import java.util.*;


public class program355
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first string:");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();


        HashMap<Character,Integer> hobj=new HashMap<>();

        int Frequency=0;

        for(char ch : Arr)                               // For each loop
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

        Set<Character>setobj = hobj.keySet();

        
        
        for(char value : setobj)
        {

            System.out.println(value + " Occurs " + hobj.get(value) +" times" );
        }

        

    }
    
}





