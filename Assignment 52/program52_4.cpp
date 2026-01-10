#include<iostream>
using namespace std;

template  <class T>
T Max(T * Arr, int iSize)
{
    int iCnt = 0;
    T iMax = Arr[0];
    
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
          if(Arr[iCnt] > iMax)
          {
               iMax = Arr[iCnt];
          }
    }

    return iMax;
}

int main ()
{
     int iRet =  0;
     int arr[] = {10,20,30,40,50};
     iRet = Max(arr,5);
     cout<<"Maximum of integer is : "<<iRet<<"\n";


     float fRet =  0;
     float frr[] = {10.0f,20.3f,30.4f,40.0f,50.9f};
     fRet = Max(frr,5);
     cout<<"Maximum of float is : "<<fRet<<"\n";

     return 0;
}