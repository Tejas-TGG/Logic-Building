// Accept matrix and swap the contents of rows...


import java.lang.*;
import java.util.*;


class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    }

    protected void finalize()
    {
            Arr = null;
            System.gc();
    }

    public void Accept()
    {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter the data : ");

            for(int i = 0; i < Arr.length; i++)
            {
                for(int j = 0; j <Arr[i].length; j++)
                {
                    Arr[i][j] = sobj.nextInt();
                }
            }
    }

    public void Display()
    {
            System.out.println("Elements of array are : ");
            for(int i = 0; i < Arr.length; i++)
            {
                for(int j = 0; j <Arr[i].length; j++)
                {
                    System.out.print(Arr[i][j]+"  ");
                }
                System.out.println();
            }
    }

    public void SwapRow()
    {
        int iTemp=0;

        // for(int i=0;i<iRow-1;i=i+2)                       // iRow-1 is used to handle odd number of row beacause if there is odd number of row ,there is no pair for last row for swap....
        // {
        //     for(int j=0;j<iCol;j++)
        //     {
        //         iTemp=Arr[i][j];
        //         Arr[i][j]=Arr[i+1][j];
        //         Arr[i+1][j]=iTemp;
        //     }
        // }


        for(int i=0;i<(Arr.length)-1;i=i+2)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                iTemp=Arr[i][j];
                Arr[i][j]=Arr[(i+1)][j];
                Arr[(i+1)][j]=iTemp;
            }
        }
    }

}

class program334
{ 
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        int X = sobj.nextInt();

        System.out.println("Enter number of columns");
        int Y = sobj.nextInt();

        Matrix mobj = new Matrix(X,Y);
        mobj.Accept();
        mobj.Display();

        mobj.SwapRow();
        System.out.println("Data after swapping is :");
        mobj.Display();
        
    }
}