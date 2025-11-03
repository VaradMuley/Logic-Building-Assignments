////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program8.5.c
//  Description :   Write a program which accept number from user and display its table in
//                  reverse order
//  Input :         5
//  Output :        50 45 40 35 30 25 20 15 10 5 
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Table(int iNo)
{
   int iCnt = 0;

   for (iCnt = 10 ; iCnt >= 1 ; iCnt--)
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
