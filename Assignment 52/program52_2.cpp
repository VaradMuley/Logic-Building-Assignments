#include<iostream>
using namespace std;

template  <class T>
T Max(T No1 , T No2 , T No3)
{
   if((No1 > No2) && (No1 > No3))
   {
        return No1;
   }
   else if((No2 > No1) && (No2 > No3))
   {
        return No2;
   }
   else
   {
        return No3;
   }
}
int main ()
{
    int iRet = 0;
    iRet = Max(10, 20, 30);
    cout<<"Maximum integer is : "<<iRet<<"\n";


    float fRet = 0;
    fRet = Max(10.30, 20.23, 30.45);
    cout<<"Maximum float is : "<<fRet<<"\n";



    return 0;
}