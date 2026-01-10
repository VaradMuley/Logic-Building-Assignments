#include<iostream>
using namespace std;

template  <class T>
T Min(T * Arr, int iSize)
{
    int iCnt = 0;
    T iMin = Arr[0];
    
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
          if(Arr[iCnt] < iMin)
          {
               iMin = Arr[iCnt];
          }
    }

    return iMin;
}

int main ()
{
     int iRet =  0;
     int arr[] = {10,20,30,40,50};
     iRet = Min(arr,5);
     cout<<"Maximum of integer is : "<<iRet<<"\n";


     float fRet =  0;
     float frr[] = {10.0f,20.3f,30.4f,40.0f,50.9f};
     fRet = Min(frr,5);
     cout<<"Maximum of float is : "<<fRet<<"\n";

     return 0;
}