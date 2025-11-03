////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program10.4.c
//  Description :   write a program which accept temperature in Fahrenheit and convert it into
//                  celsius (1 celsius = (Fahrenheit - 32) * (5/9))
//  Input :         10
//  Output :        -12.222
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhToCs(float fTemp)
{
   double dCelsius = 0.0;
   dCelsius = ((fTemp - 32) * (5.0/9.0));

   return dCelsius;
}

int main ()
{
   float fValue = 0;
   double dRet = 0 ;

   printf("Enter the temperature in Fahrenheit : \n");
   scanf("%f",&fValue);

   dRet = FhToCs(fValue);
   printf(" Converted temperature is  :  %lf ", dRet);
   
   return 0;
}
