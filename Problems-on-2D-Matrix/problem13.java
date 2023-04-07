// Accept matrix and swap the contents of column...



import java.lang.*;
import java.util.*;

import javax.swing.Icon;


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

            for(int i = 0; i < iRow; i++)
            {
                for(int j = 0; j <iCol; j++)
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

    public void SwapCol()
    {
        int iTemp=0;

        for(int i=0;i<iRow;i++)                       // iRow-1 is used to handle odd number of row beacause if there is odd number of row ,there is no pair for last row for swap....
        {
            for(int j=0;j<iCol-1;j=j+2)
            {
                iTemp=Arr[i][j];
                Arr[i][j]=Arr[i][j+1];
                Arr[i][j+1]=iTemp;
            }
        }
    }

}

class program335
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

        mobj.SwapCol();
        System.out.println("Data after swapping is :");
        mobj.Display();
        
    }
}