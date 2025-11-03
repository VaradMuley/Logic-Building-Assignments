////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program6.5.c
//  Description :   Write a program which accepts total marks and obtained marks from user and 
//                  calculate percentage
//  Input :         1000 745
//  Output :        74.5%
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

float  Percentage(int iTotal , int iObtained)
{
   float fPercentage = 0 ;
   if( iTotal == 0)
   {
         printf("Unable to calculate percentage please enter correct total marks");
         return 0;
   }
   
   fPercentage = ((((float)iObtained) / ((float)iTotal)) * 100);

   return fPercentage;

}

int main ()
{
   int iValue1 = 0 , iValue2 = 0;
   float fRet = 0.0;

   printf("Enter the total marks: ");
   scanf("%d",&iValue1);

   printf("Enter the Obtained marks : ");
   scanf("%d",&iValue2);

   fRet = Percentage(iValue1,iValue2);

   printf("Percentage is : %f\n",fRet);

   return 0;
}
