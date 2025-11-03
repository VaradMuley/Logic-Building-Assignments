////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program11.2.c
//  Description :   write a program which accept range from user and display all even numbers 
//                  in between range 
//  Input :         10   18
//  Output :        10   12    14    16    18
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


#define PI 3.14

void RangeDisplayEven(int iStart , int iEnd)
{
   int iCnt = 0 ;

   if(iStart > iEnd)
   {
      printf("Invalid Range\n");
      return;
   }

   for (iCnt = iStart ; iCnt <= iEnd ; iCnt++)
   {
      if((iCnt % 2) == 0)
      {
          printf("%d\t",iCnt);
      }
   }
      


}
int main ()
{
   int iValue1 = 0 , iValue2 = 0 ;

   printf("Enter starting point : \n");
   scanf("%d",&iValue1);

   printf("Enter Ending point : \n");
   scanf("%d",&iValue2);


   RangeDisplayEven(iValue1 , iValue2);
   
   return 0;
}
