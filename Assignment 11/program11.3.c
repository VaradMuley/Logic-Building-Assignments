////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program11.3.c
//  Description :   write a program which accept range from user and display Addition of all
//                  numbers in between that range 
//  Input :         23   30
//  Output :        212
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

# include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
   int iCnt = 0 ;
   int iSum = 0 ;

   if(iStart > iEnd)
   {
      printf("Invalid Range\n");
   }

   for (iCnt = iStart ; iCnt <= iEnd ; iCnt++)
   {
      iSum = iSum + iCnt;
   }

   return iSum;
}
int main ()
{
   int iValue1 = 0 , iValue2 = 0 ;
   int iRet = 0 ;

   printf("Enter starting point : \n");
   scanf("%d",&iValue1);

   printf("Enter Ending point : \n");
   scanf("%d",&iValue2);

   iRet = RangeSum(iValue1 , iValue2);
   printf("Addition of all numbers between range is : %d\n",iRet);
   
   return 0;
}
