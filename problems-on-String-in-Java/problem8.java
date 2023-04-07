// // Accept string from user and display length of word which has maximum charecter , from sentence of string....



// import java.io.*;
// import java.util.*;

// class program305 {
//     public static void main(String arg[]) 
//     {
//         Scanner sobj = new Scanner(System.in);
//         System.out.println("Enter string");
//         String str = sobj.nextLine();

//         String newstr=str.replaceAll("\\s+", " ");                    //  "\\s+" means replace more than one white space between two words  into   " "  one white space....          
//         String newstr2=newstr.trim();                                                    // The trim() method removes whitespace from both ends of a string 
//        String arr[]=newstr2.split(" ");


//        int max=0;


//        for (int i=0;i<arr.length;i++)
//        {
//          if(arr[i].length()>max)
//          {
//             max=arr[i].length();
//          }
//        }

//        System.out.println("Length of largest word is "+max);
//     }
// }



import java.lang.*;
import java.util.*;


class program305
{
  public static void main(String[] args) 
  {
    Scanner sobj= new Scanner(System.in);
    System.out.println("Enter string");
    String str=sobj.nextLine();

    String Arr[]=str.split(" ");

    int iMax=Arr[0].length();

    int icnt=0;

    for(int i=1;i<Arr.length;i++)
    {
      
       if((Arr[i].length())>iMax)
       {
           icnt=i;
           iMax=Arr[i].length();
       }
    }

    System.out.println("Word which has maximum charecters is "+Arr[icnt]+" Which contains "+iMax+" Number of charecters");
    
  }
}