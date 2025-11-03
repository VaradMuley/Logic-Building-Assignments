////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.4.c
//  Description :   Check Positive , negative or zero
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CheckNumberType(int iValue)
{
   if(iValue > 0)
   {
      printf("%d is a positive number\n ",iValue);
   }
   else if (iValue < 0)
   {
      printf("%d is a negative number \n",iValue);
   }
   else
   {
      printf("%d is a zero (0) \n",iValue);
   }
   
}


int main ()
{
   int iNum = 0;

   printf("Enter Number : ");
   scanf("%d",&iNum);

   CheckNumberType(iNum);

   return 0;
}
