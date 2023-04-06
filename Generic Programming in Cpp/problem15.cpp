// program using Generic Way.........

#include <iostream>
using namespace std;

template <class T>

class ArrayX
{

public:
    T *Arr;
    int Size;

    ArrayX(int value);

    ~ArrayX();

    void Accept();

    void Display();

    T Maximum();
};

template <class T>
ArrayX<T>::ArrayX(int value)
{
    Size = value;
    Arr = new T[Size];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete[] Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    cout << "Enter the values:" << endl;

    for (int i = 0; i < Size; i++)
    {
        cin >> Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    cout << "values are:" << endl;

    for (int i = 0; i < Size; i++)
    {
        cout << Arr[i] << endl;
    }
}

// returnvalue classname::functionname(parameter)
//{}

template <class T>
T ArrayX<T>::Maximum()
{
    T iMax = Arr[0];

    for (int i = 0; i < Size; i++)
    {
        if (iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }

    return iMax;
}

int main()
{
    ArrayX<int> obj1(5);

    obj1.Accept();
    obj1.Display();

    int iRet = obj1.Maximum();

    cout << "Maximum number is:" << iRet << endl;

    return 0;
}