////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program10.3.c
//  Description :   write a program which accept distance in kilometer and convert it into meter
//  Input :         5
//  Output :        5000
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMToMeter(int iNo)
{
   int iKM = 0 , iConversion = 0 ;
   iKM = 1000;

   iConversion = iNo * iKM;

   return iConversion;
}

int main ()
{
   int iValue = 0 ;
   int iRet = 0 ;


   printf("Enter Distance : \n");
   scanf("%d",&iValue);

   iRet = KMToMeter(iValue);

   printf(" Area is :  %d ", iRet);
   
   return 0;
}
