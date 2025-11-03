////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.3.c
//  Description :   write a program which accepts number from user and display  all its
//                  non factors 
//  Input :12       Output : 5 7 8 9 10 11
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int NonFact(int iNo)
{
   int iCnt = 0;

   for (iCnt = 1 ; iCnt < iNo ; iCnt++)
   {
      if((iNo % iCnt) != 0)
      {
            printf("%d \t",iCnt);
      }
   }

}

int main ()
{
   int iValue = 0;

   
   printf("Enter the number : ");
   scanf("%d",&iValue);

   NonFact(iValue);
   return 0;
}
