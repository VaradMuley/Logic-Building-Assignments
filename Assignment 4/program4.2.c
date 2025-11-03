////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.2.c
//  Description :   write a program which accepts number from user and display its factors
//                  in decreasing order 
//  Input :12       Output : 6 4 3 2 1  
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactRev(int iNo)
{
   int iCnt = 0;

   for (iCnt = iNo-1 ; iCnt >= 1 ; iCnt--)
   {
      if((iNo % iCnt) == 0)
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

   FactRev(iValue);
   return 0;
}
