////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program7.2.c
//  Description :   Write a program which accepts number from user and print that numbers till 
//                  that number 
//  Input :         5
//  Output :        1   2  3  4  5
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
      printf("%d \n",iCnt);
   }

}

int main ()
{
   int iValue = 0;

   printf("Enter the number : ");
   scanf("%d",&iValue);

   Display(iValue);
   return 0;
}
