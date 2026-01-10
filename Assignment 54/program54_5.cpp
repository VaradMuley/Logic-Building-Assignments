#include <iostream>
using namespace std;

template <class T>
T Minimum(T *Arr, int iSize)
{
    int iCnt = 0;
    T Min = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }

    return Min;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    float Brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    cout << Minimum(Arr, 5) << "\n";
    cout << Minimum(Brr, 4) << "\n";

    return 0;
}
