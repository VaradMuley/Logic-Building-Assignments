////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program7.5.c
//  Description :   Write a program which accepts N and print first 5 multiples of N 
//  Input :         4
//  Output :        4  8  12  16  20
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
   int iCnt = 0;

   for (iCnt = 1 ; iCnt <= 5 ; iCnt++)
   {
      printf("%d \t",iNo * iCnt);
   }

}

int main ()
{
   int iValue = 0;

   printf("Enter the number : ");
   scanf("%d",&iValue);

   MultipleDisplay(iValue);
   return 0;
}


// icnt == 5 
// break 