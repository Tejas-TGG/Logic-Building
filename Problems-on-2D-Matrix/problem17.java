
import java.lang.*;
import java.util.*;

class TwoDArray
{
    public int Arr[][];
    public int iRow;
    public int iCol;
    

    public TwoDArray(int a , int b )
    {
        this.iRow=a;
        this.iCol=b;
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

    public void SumColumn()
    {
        int iSum=0;
        for(int i=0;i<iRow;i++)
        {
            for(int j=0;j<iCol;j++)
            {
                iSum=iSum+Arr[j][i];
            }

            System.out.println(iSum);
            iSum=0;
        }
        

    }
}


class program4_45
{
    public static void main(String args[]) 
    {
        int iRet=0;


        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows");
        int irow=sobj.nextInt();
        System.out.println("Enter number of columns");
        int icol=sobj.nextInt();

        TwoDArray obj = new TwoDArray(irow,icol);
        obj.Accept();
        obj.Display();
        obj.SumColumn();
    }
}