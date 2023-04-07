import java.lang.*;
import java.util.*;

class TwoDArray
{
    public int Arr[][];
    public int iRow;
    public int iCol;
    public int iNo;

    public TwoDArray(int a , int b , int c)
    {
        this.iRow=a;
        this.iCol=b;
        this.iNo=c;
        Arr=new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner iobj= new Scanner(System.in);
        System.out.println("Enter elements of array");

        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=iobj.nextInt();
            }

        }
    }


    public void Display()
    {
        System.out.println("Elements of array are");

        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }

            System.out.println("");

        }
    }

    public int Frequrncy()
    {
        int icount=0;

        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                if(iNo==Arr[i][j])
                {
                    icount++;
                }
            }

        }

        return icount;

    }
}


class program2_45
{
    public static void main(String args[]) 
    {
        int iRet=0;


        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows");
        int irow=sobj.nextInt();
        System.out.println("Enter number of columns");
        int icol=sobj.nextInt();

        System.out.println("Enter number by users");
        int iValue=sobj.nextInt();

        TwoDArray obj = new TwoDArray(irow,icol,iValue);
        obj.Accept();
        obj.Display();
        iRet=obj.Frequrncy();
        System.out.println("Frequency is "+iRet);
        
    }
}