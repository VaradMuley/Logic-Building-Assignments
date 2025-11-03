////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program10.1.c
//  Description :   Accept number from user and calculate its radius
//  Input :         5.3
//  Output :        Area is 88.202606
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


#define PI 3.14

double CircleArea(float fRadius)
{
   double Area = 0 ;

   if(fRadius <= 0 )
   {
      fRadius = -fRadius;
   }

   Area = PI *  fRadius * fRadius ;

   return Area;
 
}

int main ()
{
   float fValue = 0;
   double dRet = 0 ;

   printf("Enter the number : \n");
   scanf("%f",&fValue);

   dRet = CircleArea(fValue);
   printf(" Area is :  %lf ", dRet);
   
   return 0;
}
