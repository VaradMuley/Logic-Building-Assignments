////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program9.2.c
//  Description :   Accept amount in US Dollar and return its corresponding value in Indian 
//                  currency Consider 1$ as 70 rupees 
//  Input :         10
//  Output :        700
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
   int iNum = 0 ;

   iNum = iNo * 70;

   return iNum;
}

int main ()
{
   int iValue = 0;
   int iRet = 0 ;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   iRet = DollarToINR(iValue);

   printf("Value in INR is %d ", iRet);
   return 0;
}
