#include<iostream>
using namespace std;

template  <class T>
int Reverse(T * Arr , int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    T temp;

    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}
int main ()
{
    int i = 0 ;
    
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(i = 0; i < 9 ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    
    Reverse(arr , 9);

    for(i = 0 ; i < 9 ; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}