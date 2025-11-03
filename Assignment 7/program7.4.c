////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program7.4.c
//  Description :   Write a program which accepts N number from user and print all odd numbers up
//                  to N 
//  Input :         5
//  Output :        1 3 
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
   int iCnt = 0;

   for (iCnt = 1 ; iCnt < iNo ; iCnt++)
   {
      if((iCnt % 2 ) != 0)
      {
         printf("%d \t",iCnt);
      }
   }

}

int main ()
{
   int iValue = 0;

   printf("Enter the number : ");
   scanf("%d",&iValue);

   OddDisplay(iValue);
   return 0;
}
