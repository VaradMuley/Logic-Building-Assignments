#include <iostream>
using namespace std;

template <class T>
void Replace(T *Arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == oldVal)
        {
            Arr[iCnt] = newVal;
        }
    }
}

int main()
{
    int iCnt = 0;
    int arr[] = {10, 20, 30, 20, 40, 20};

    Replace(arr, 6, 20, 99);

    for(iCnt = 0; iCnt < 6; iCnt++)
    {
        cout << arr[iCnt] << "\t";
    }

    return 0;
}
