////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program6.2.c
//  Description :   Write a program which accepts one number from user and check whether that 
//                  Number is greater than 100 or not
//  Input :         101
//  Output :        Greater
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

bool CheckGreater(int iNo)
{
   if(iNo > 100)
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
   int iValue = 0;
   bool bRet = false;

   printf("Enter the number : ");
   scanf("%d",&iValue);

   bRet = CheckGreater(iValue);

   if(bRet == true)
   {
      printf("Greater\n");
   }
   else 
   {
      printf("Smaller\n");
   }

   return 0;
}
