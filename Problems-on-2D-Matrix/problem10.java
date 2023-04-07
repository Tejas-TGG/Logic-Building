//  Accept 2d array and find out largest element from that matrix


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

    public int Maximum()
    {
        int iMax = Arr[0][0];

        for(int i = 0; i < iRow; i++)
        {
            for(int j =0; j< iCol; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }
}

class program332
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

        int iret=0;

        iret=mobj.Maximum();
        System.out.println("Maximum element from matrix is :" +iret);
    }
}