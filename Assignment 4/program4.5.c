////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.5.c
//  Description :   write a program which accepts number from user and return difference  
//                  between summation of all its factors and nonfactors
//  Input :12       Output : -34 (16 - 50)
//  Input :10       Output : -29 (8 - 37)
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt = 0 , iSum1 = 0 , iSum2 =  0;

   for (iCnt = 1 ; iCnt < iNo ; iCnt++)
   {
      if((iNo % iCnt) != 0)
      {
            iSum1 = iSum1 + iCnt ;
      }
   }

   for (iCnt = 1 ; iCnt < iNo ; iCnt++)
   {
      if((iNo % iCnt) == 0)
      {
            iSum2 = iSum2 + iCnt ;
      }
   }
   return iSum2 - iSum1;

}

int main ()
{
   int iValue = 0;
   int iRet = 0 ;
   
   printf("Enter the number : ");
   scanf("%d",&iValue);

   iRet = FactDiff(iValue);

   printf("%d",iRet);
   return 0;
}
