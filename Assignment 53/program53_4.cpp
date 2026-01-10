#include <iostream>
using namespace std;

template <class T>
T SecondMin(T *Arr, int iSize)
{
    int iCnt = 0;
    T Min = Arr[0];
    T sMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < sMin && Arr[iCnt] > Min)
        {
            sMin = Arr[iCnt];
        }
    }

    return sMin;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    cout << SecondMin(Arr, 5);

    return 0;
}
