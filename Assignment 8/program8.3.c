////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program8.3.c
//  Description :   Write a program to find factorial of given number 
//  Input :         5
//  Output :        5 * 4 * 3 * 2 * 1
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
   int iCnt = 0;
   int iSum = 1;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
      iSum = iSum * iCnt;
   }
   return iSum;

}

int main ()
{
   int iValue = 0;
   int iRet = 0 ;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   iRet = Factorial(iValue);
   printf("Factorial of given number is : %d \n", iRet);

   return 0;
}
