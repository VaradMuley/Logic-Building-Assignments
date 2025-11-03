////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.1.c
//  Description :   Check Even or Odd
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CheckEvenOdd(int iNum)
{
   if((iNum % 2 ) == 0)
   {
      printf("%d is a Even Number ",iNum);
   }
   else
   {
      printf("%d is a Odd Number ",iNum);
   }
}


int main ()
{
   int iNumber = 0;

   printf("Enter the number : ");
   scanf("%d",&iNumber);

   CheckEvenOdd(iNumber);
   return 0;
}
