#include <iostream>
using namespace std;

template <class T>
bool CheckSorted(T *Arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    if(CheckSorted(Arr, 5))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    return 0;
}
