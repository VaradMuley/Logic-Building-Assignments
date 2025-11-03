////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program9.3.c
//  Description :   Write a program to find even factorial of number  
//  Input :         5
//  Output :        8 (4 * 2)
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
   int iCnt = 0;
   int iSum = 1;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
      if((iCnt % 2) == 0)
      {
         iSum = iSum * iCnt;
      }
   }
   return iSum;

}

int main ()
{
   int iValue = 0;
   int iRet = 0 ;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   iRet = EvenFactorial(iValue);

   printf("Even factorial of number is  %d ", iRet);
   return 0;
}
