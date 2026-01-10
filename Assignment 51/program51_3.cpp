#include<iostream>
using namespace std;

template  <class T>
int SearchFirst(T * Arr , int iSize , T iNo)
{
    int iCnt = 0;
    int iValue = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iValue = iCnt;
            break;
        }
    }
    return iValue;

}
int main ()
{
    int iRet = 0 ;
    int arr[] = {10,20,30,10,30,40,10,40,10};
    iRet = SearchFirst(arr,9,40);
    cout<<"First Occurance of Number is : "<<iRet<<"\n";

    char brr[] = {'a','b','a','c','d'};
    iRet = SearchFirst(brr,5,'c');
    cout<<"First occurance of character is : "<<iRet<<"\n";


    return 0;
}