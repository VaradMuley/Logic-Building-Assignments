#include<iostream>
using namespace std;

template  <class T>
int Frequency(T * Arr , int iSize , T iNo)
{
    int iCnt = 0;
    int iCount = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;

}
int main ()
{
    int iRet = 0 ;
    int arr[] = {10,20,30,10,30,40,10,40,10};
    iRet = Frequency(arr,9,40);
    cout<<"Frequency of Number is : "<<iRet<<"\n";

    char brr[] = {'a','b','a','c','d'};
    iRet = Frequency(brr,5,'c');
    cout<<"Frequency of Number is : "<<iRet<<"\n";


    return 0;
}