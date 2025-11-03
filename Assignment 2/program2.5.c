////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.5.c
//  Description :   Accept one number from user and check whether number is even or odd
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

bool CheckEven(int iNo)
{
   if((iNo % 2) == 0)
   {
      return true;
   } 
   else 
   {
      return false;
   }
}

int main ()
{
   int iValue = 0;
   bool bRet = false;

   printf("Enter the number : ");
   scanf("%d",&iValue);

   bRet = CheckEven(iValue);

   if(bRet == true)
   {
      printf("Number is even");
   }
   else 
   {
      printf("Number is odd");
   }

   return 0;
}
