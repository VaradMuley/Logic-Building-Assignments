#include <iostream>
using namespace std;

template <class T>
void Reverse(T Arr[], int iSize)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    T Crr[iSize];

    for(iCnt1 = iSize - 1, iCnt2 = 0; iCnt1 >= 0; iCnt1--, iCnt2++)
    {
        Crr[iCnt2] = Arr[iCnt1];
    }

    for(iCnt2 = 0; iCnt2 < iSize; iCnt2++)
    {
        cout << Crr[iCnt2] << "\t";
    }
}

int main()
{
    int iCnt = 0;
    int Arr[] = {10, 20, 30, 40, 30, 60, 70, 30, 90};

    for(iCnt = 0; iCnt < 9; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }

    cout << "\n";

    Reverse(Arr, 9);

    return 0;
}
