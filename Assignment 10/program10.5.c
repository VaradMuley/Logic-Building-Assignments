////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program10.5.c
//  Description :   Accept area in square feet and convert into square meter
//  Input :         5
//  Output :        0.464500
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
   double dSquare  = 0.0929;
   dSquare = iValue * dSquare;

   return dSquare;
}

int main ()
{
   float fValue = 0;
   double dRet = 0 ;

   printf("Enter area in Square feet : \n");
   scanf("%f",&fValue);

   dRet = SquareMeter(fValue);
   printf(" Converted temperature is  :  %lf ", dRet);
   
   return 0;
}
