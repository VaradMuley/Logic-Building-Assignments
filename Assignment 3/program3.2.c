////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.1.c
//  Description :   Write a program which accepts one number from user and write even factors 
//                  of that number
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayFactors(int iNo)
{
   int iCnt = 0;

   if(iNo < 0)
   {
      iNo = - iNo;
   }

   for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
      if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
      {
            printf("%d\n",iCnt);
      }
   }

}

int main ()
{
   int iValue = 0;
   
   printf("Enter the number : ");
   scanf("%d",&iValue);

   DisplayFactors(iValue);

   return 0;
}
