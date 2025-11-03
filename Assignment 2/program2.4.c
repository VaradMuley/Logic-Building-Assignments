////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.4.c
//  Description :   Accept two numbers from user and display first number in the Second
//                  number times
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Display(int iNo , int iFrequency )
{
   int iCnt = 0;

   if(iFrequency < 0)
   {
      iFrequency = -iFrequency;
   }

   for(iCnt = 1 ; iCnt <= iFrequency; iCnt++)
   {
      printf("%d\n",iNo);
   } 
}

int main ()
{
    int iValue1 = 0 , iValue2 = 0;


    printf("Enter Number : ");
    scanf("%d",&iValue1);

    printf("Enter Frequency : ");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);
    return 0;
}

