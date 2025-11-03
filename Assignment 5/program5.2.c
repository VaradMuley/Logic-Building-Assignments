////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program5.2.c
//  Description :   Find Maximum of two numbers 
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FindMax(int a , int b )
{
   if(a > b )
   {
      return a;
   }
   else
   {
      return b;
   }
}


int main ()
{
   int iNum1 = 0 , iNum2 = 0 , iResult = 0  ;

   printf("Enter the first number : ");
   scanf("%d",&iNum1);

   printf("Enter the Second number : ");
   scanf("%d",&iNum2);

   iResult = FindMax(iNum1 , iNum2);
   printf("Maximum number is : %d\n",iResult);

   return 0;
}
