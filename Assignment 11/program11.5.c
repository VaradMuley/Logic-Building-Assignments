////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program11.5.c
//  Description :   write a program which accept range from user and display all numbers in 
//                  that range in reverse order 
//  Input :         23   30
//  Output :        108
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


#define PI 3.14

int RangeReverseDisplay(int iStart , int iEnd)
{
   int iCnt = 0 ;

   if(iStart > iEnd)
   {
      printf("Invalid Range\n");
   }

   for (iCnt = iEnd ; iCnt >= iStart ; iCnt--)
   {
      printf("%d \t",iCnt);
   }

}
int main ()
{
   int iValue1 = 0 , iValue2 = 0 ;

   printf("Enter starting point : \n");
   scanf("%d",&iValue1);

   printf("Enter Ending point : \n");
   scanf("%d",&iValue2);

   RangeReverseDisplay(iValue1 , iValue2);
   
   return 0;
}
