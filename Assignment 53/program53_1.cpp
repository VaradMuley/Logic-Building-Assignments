#include <iostream>
using namespace std;

template <class T>
void CopyArray(T *Src, T *Dest, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Dest[iCnt] = Src[iCnt];
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int Brr[5];
    int iCnt = 0;

    CopyArray(Arr, Brr, 5);

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout << Brr[iCnt] << "\t";
    }

    return 0;
}
