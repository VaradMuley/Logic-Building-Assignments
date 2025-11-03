////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program8.4.c
//  Description :   Write a program which accept number from user and display its table
//  Input :         5
//  Output :        5 10 15 20 25 30 35 40 45 50 
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Table(int iNo)
{
   int iCnt = 0;

   for (iCnt = 1 ; iCnt <= 10 ; iCnt++)
   {
      printf("%d \t",iNo * iCnt);
   }

}

int main ()
{
   int iValue = 0;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   Table(iValue);
   return 0;
}
