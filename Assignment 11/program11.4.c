////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program11.4.c
//  Description :   write a program which accept range from user and display addition of all
//                  even numbers in between that range 
//  Input :         23   30
//  Output :        108
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


#define PI 3.14

int RangeSumEven(int iStart , int iEnd)
{
   int iCnt = 0 ;
   int iSum = 0 ;

   if(iStart > iEnd)
   {
      printf("Invalid Range\n");
      return;
   }

   for (iCnt = iStart ; iCnt <= iEnd ; iCnt++)
   {
      if((iCnt % 2) == 0)
      {
          iSum = iSum + iCnt;
      }
   }
   return iSum;

}
int main ()
{
   int iValue1 = 0 , iValue2 = 0 ;
   int iRet = 0;

   printf("Enter starting point : \n");
   scanf("%d",&iValue1);

   printf("Enter Ending point : \n");
   scanf("%d",&iValue2);


   iRet = RangeSumEven(iValue1 , iValue2);

   printf("Addition of numbers in between the range is : %d\n",iRet);
   
   return 0;
}
