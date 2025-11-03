////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program6.3.c
//  Description :   Write a program which accepts two numbers and check whether numbers are 
//                  equal or not 
//  Input :         10 , 12
//  Output :        Not Equal
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

bool CheckEqual(int iNo1 , int iNo2 )
{
   if(iNo1 == iNo2)
   {
      return true;
   } 
   else 
   {
      return false;
   }
}

int main ()
{
   int iNum1 = 0 , iNum2 = 0 ;
   bool bRet = false;

   printf("Enter the first number : ");
   scanf("%d",&iNum1);

   printf("Enter the Second number : ");
   scanf("%d",&iNum2);

   bRet = CheckEqual(iNum1 , iNum2);

   if(bRet == true)
   {
      printf("Equal\n");
   }
   else 
   {
      printf("Not Equal\n");
   }

   return 0;
}
