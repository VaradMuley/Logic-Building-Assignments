////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program6.4.c
//  Description :   Write a program which accepts three numbers and print its 
//                  Multiplication
//  Input :         5 4 7 
//  Output :        140
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
   if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))  
   {
      return 0;
   }

   if(iNo1 == 0 )
   {
      iNo1 = 1;
   }

   if(iNo2 == 0 )
   {
      iNo2 = 1;
   }

   if(iNo3 == 0 )
   {
      iNo3 = 1;
   }

   return iNo1 * iNo2 * iNo3;

}

int main ()
{
   int iNum1 = 0 , iNum2 = 0 , iNum3 = 0;
   int iRet = 0;

   printf("Enter the first number : ");
   scanf("%d",&iNum1);

   printf("Enter the Second number : ");
   scanf("%d",&iNum2);

   printf("Enter the Second number : ");
   scanf("%d",&iNum3);

   iRet = Multiply(iNum1 , iNum2 , iNum3);

   printf("Multiplication is : %d\n",iRet);


   return 0;
}
