#include <iostream>
using namespace std;

template <class T>
bool Search(T *Arr, int iSize, T Value)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Value)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    if(Search(arr, 5, 30))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
