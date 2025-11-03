////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program10.2.c
//  Description :   write a program which accept width and height of rectangle and calculate area
//  Input :         5.3     9.78
//  Output :        Area is 51.834
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


double RectangleArea(float fWidth , float fHeight)
{
   double Area = 0 ;

   Area = fWidth * fHeight;
   return Area;
 
}

int main ()
{
   float fValue1 = 0.0f;
   float fValue2 = 0.0f;

   double dRet = 0.0 ;

   printf("Enter width : \n");
   scanf("%f",&fValue1);

   printf("Enter Height : \n");
   scanf("%f",&fValue2);

   dRet = RectangleArea(fValue1 , fValue2);

   printf(" Area is :  %lf ", dRet);
   
   return 0;
}
