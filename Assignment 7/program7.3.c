////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program7.3.c
//  Description :   Write a program which accepts number from user and print its numberline
//                  that number 
//  Input :         4
//  Output :        -4  -3   -2   -1   0    1   2  3  4  5
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   for (iCnt = -iNo ; iCnt <= iNo ; iCnt++)
   {
      printf("%d \t",iCnt);
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
