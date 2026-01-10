#include <iostream>
using namespace std;

template <class T>
T SumEven(T *Arr, int iSize)
{
    int iCnt = 0;
    T iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }

    return iSum;
}

int main()
{
    int arr[] = {10, 21, 30, 41, 50};

    cout << SumEven(arr, 5);

    return 0;
}
