////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program11.1.c
//  Description :   write a program which accept range from user and display all numbers 
//                  in between range 
//  Input :         10   18
//  Output :        10  11  12  13  14  15  16  17  18
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>



void RangeDisplay(int iStart , int iEnd)
{
   int iCnt = 0 ;

   if(iStart > iEnd)
   {
      printf("Invalid Range\n");
      return;
   }

   for (iCnt = iStart ; iCnt <= iEnd ; iCnt++)
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


   RangeDisplay(iValue1 , iValue2);
   
   return 0;
}
