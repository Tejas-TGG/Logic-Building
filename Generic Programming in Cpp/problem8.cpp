// Accept N number from user and display number

#include <iostream>
using namespace std;



template <class T>
class arrayx
{
public:
    T *arr = NULL;
    int Size = 0;

    arrayx(int N);
    ~arrayx();
    void Accept();
    void Display();
    T Addition();

};

template <class T>
arrayx<T>::arrayx(int N)
{
    this->Size = N;
    arr = new T[Size];
}

template <class T>
arrayx<T>::~arrayx()
{
    delete []arr;
}


template <class T>
void arrayx<T>::  Accept()
{
    cout << "Enter elements of array:\n";

    for (int i = 0; i < Size; i++)
    {
        cin >> arr[i];
    }
}

template <class T>
void arrayx<T>:: Display()
{
    cout << "Elements of array are:\n";

    for (int i = 0; i < Size; i++)
    {
        cout << arr[i] << endl;
    }
}


template <class T>
T arrayx<T>:: Addition()
{
    T isum=0;
    for (int i = 0; i < Size; i++)
    {
        isum=isum+arr[i];

    }

    return isum;
    

}

int main()
{
    int isize = 0;
    int iret=0;

    cout << "Enter size of array:\n";
    cin >> isize;

    // arrayx<int> obj1(isize);
    // obj1.Accept();
    // obj1.Display();
    // iret= obj1.Addition();
    // cout<<"Addition is"<<iret<<endl;

    float fret=0.0;

    arrayx<float> obj2(isize);
    obj2.Accept();
    obj2.Display();
    fret=obj2.Addition();
    cout<<"Addition is"<<fret<<endl;


    return 0;
}