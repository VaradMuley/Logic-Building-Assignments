////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.5.c
//  Description :   Find largest among three numbers 
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FindLargest(int x , int y , int z )
{
   if((x > y) && (x > z))
   {
      printf("%d is a greatest number\n ",x);
   }
   else if((y > x) && (y > z))
   {
      printf("%d is a greatest number\n ",y);
   }
   else
   {
      printf("%d is a greatest number \n",z);
   }
   
}


int main ()
{
   int iNum1 = 0 , iNum2 = 0 , iNum3 = 0;
   int iRet = 0 ;

   printf("Enter first number : \n");
   scanf("%d",&iNum1);

   printf("Enter second number : \n");
   scanf("%d",&iNum2);

   printf("Enter third number : \n");
   scanf("%d",&iNum3);

   iRet = FindLargest(iNum1 , iNum2 , iNum3);

   return 0;
}
