////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.3.c
//  Description :   Check Leap year
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CheckLeapYear(int iYr)
{
   if((iYr % 4 ) == 0)
   {
      printf("It is a leap year\n");
   }
   else
   {
      printf("It is not a leap year\n");
   }
}


int main ()
{
   int iYear = 0;

   printf("Enter the Year : ");
   scanf("%d",&iYear);

   CheckLeapYear(iYear);

   return 0;
}
