////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program3.1.c
//  Description :   Write a program which accepts one number from user and print that number of
//                  even numbers on screen 
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void PrintEven(int iNo)
{
   int iCnt = 0;
   if(iNo < 0)
   {
     return;
   }

   for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
      printf("%d \n" ,iCnt * 2 );
   }

}

int main ()
{
   int iValue = 0;
   
   printf("Enter the number : ");
   scanf("%d",&iValue);

   PrintEven(iValue);

   return 0;
}
