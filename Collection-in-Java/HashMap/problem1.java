// Accept string from user and display frequency of each charecter from that string...
// Use of #map
// See diagram in book.......

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


public class program353
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first string:");
        // String str=sobj.nextLine();

        // char Arr[]=str.toCharArray();


        // HashMap<Character,Integer> hobj=new HashMap<>();

        // int Frequency=0;

        // for(char ch : Arr)                               // For each loop
        // {
        //     if(hobj.containsKey(ch))
        //     {
        //         Frequency=hobj.get(ch);

        //         System.out.println(Frequency);

        //         hobj.put(ch, Frequency+1);
        //     }
        //     else
        //     {
        //         hobj.put(ch, 1);
        //     }
        // }

        // System.out.println(hobj);



        ArrayList<Integer> list=new ArrayList<Integer>();
        list.add(11);
        list.add(21);
        list.add(51);
        list.add(101);

        int Arr[]=new int[list.size()];

        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=list.get(i);
            System.out.println(Arr[i]);
        }

        
        ArrayList<Integer> list1=new ArrayList<Integer>();
        for(int i=0;i<Arr.length;i++)
        {
            list1.add(Arr[i]);
            System.out.println(list1.get(i));
        }

        String str=list.toString();

        System.out.println(str);
    }
    
}





