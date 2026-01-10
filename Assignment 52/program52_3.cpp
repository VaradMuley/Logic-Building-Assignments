#include<iostream>
using namespace std;

template  <class T>
T AddN(T * Arr, int iSize)
{
     T Sum;
     int iCnt = 0 ;

     Sum = Arr[0];
     for (iCnt = 0; iCnt < iSize; iCnt++)
     {
          Sum = Sum + Arr[iCnt];
     }

     return Sum;
}
int main ()
{
     int iRet =  0;
     int arr[] = {10,20,30,40,50};
     iRet = AddN(arr,5);
     cout<<"Addition of integer is : "<<iRet<<"\n";


     float fRet =  0;
     float frr[] = {10.0,20.3,30.4,40.0,50.0};
     fRet = AddN(frr,5);
     cout<<"Addition of float is : "<<fRet<<"\n";




    return 0;
}