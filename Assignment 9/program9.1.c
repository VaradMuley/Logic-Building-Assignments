////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program9.1.c
//  Description :   Write a program which accept number from user and display the pattern
//  Input :         5
//  Output :        *   *  *  *  *  #  #  #  #  #
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Table(int iNo)
{
   if(iNo < 0)
   {
      iNo = -iNo;
   }
   int iCnt = 0;

   for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
      printf("* \t");
   }

   for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
      printf("#\t");
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
