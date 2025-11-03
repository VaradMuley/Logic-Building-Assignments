////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program9.3.c
//  Description :   Write a program which returns difference between even factorial and 
//                  odd factorial
//  Input :         5
//  Output :        -7 (8 - 15)
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
   int iCnt = 0;
   int iEven = 1 , iOdd = 1;
   int iDifference = 0 ;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
      if((iCnt % 2) == 0)
      {
         iEven = iEven * iCnt;
      }
      else
      {
         iOdd = iOdd * iCnt;
      }
   }   

   iDifference = iEven - iOdd ;

   return iDifference;
 
}

int main ()
{
   int iValue = 0;
   int iRet = 0 ;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   iRet = FactorialDiff(iValue);
   printf(" Factorial Difference is  %d ", iRet);
   return 0;
}
