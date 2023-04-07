// // Accept two strings from user and display the frequency of letter which comes maximum times..


import java.lang.*;
import java.util.*;


class program315
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();

        String Strs=str.toLowerCase();

        char arr[]=Strs.toCharArray();

        int frequency[]=new int[26];

        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==' ')
            {
                continue;
            }
            frequency[arr[i]-'a']++;
        }

        int iMax=0;
        int ipos=0;
        for(int i=0;i<frequency.length;i++)
        {
            if(frequency[i]>0)
            {

                if(frequency[i]>iMax)
                {
                    iMax=frequency[i];
                    ipos=i;

                }
            }
        }

        System.out.println("charecter which comes maximum time is "+(char)(ipos+'a')+":"+frequency[ipos]);
    }
}



