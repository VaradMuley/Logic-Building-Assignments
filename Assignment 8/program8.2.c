////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program8.2.c
//  Description :   Accept single from user and print it into word
//  Input :         4
//  Output :        four
//  Author :        Varad Nitin Muley
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
   if(iNo >= 10)
   {
      printf("Invalid Number\n");
   }
   if(iNo == 0 )
   {
      printf("Zero");
   }
   if(iNo == 1 )
   {
      printf("one");
   }
   if(iNo == 2 )
   {
      printf("Two");
   }
   if(iNo == 3 )
   {
      printf("Three");
   }
   if(iNo == 4 )
   {
      printf("Four");
   }
   if(iNo == 5 )
   {
      printf("Five");
   }
   if(iNo == 6 )
   {
      printf("Six");
   }
   if(iNo == 7 )
   {
      printf("Seven");
   }
   if(iNo == 8 )
   {
      printf("Eight");
   }
   if(iNo == 9 )
   {
      printf("Nine");
   }
}

int main ()
{
   int iValue = 0;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   Display(iValue);
   return 0;
}
