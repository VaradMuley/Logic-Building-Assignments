#include <iostream>
using namespace std;

template <class T>
T SecondMax(T *Arr, int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];
    T sMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > sMax && arr[iCnt] < Max)
        {
            sMax = Arr[iCnt];
        }
    }

    return sMax;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    cout << SecondMax(Arr, 5);

    return 0;
}
