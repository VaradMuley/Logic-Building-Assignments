////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.1.c
//  Description :   write a program which accepts number and display its multiplication of 
//                  factors
//  Input :12       Output : 144 (1*2*3*4*6)    
//  Author :        Varad Nitin Muley
//  Date :          02/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
   int iCnt = 0;
   int iMult = 1;

   if(iNo < 0)
   {
      iNo = - iNo;
   }

   for (iCnt = 1 ; iCnt < iNo ; iCnt++)
   {
      if((iNo % iCnt) == 0)
      {
            iMult = iMult * iCnt;
      }
      
   }
   return iMult;

}

int main ()
{
   int iValue = 0;
   int iRet = 0 ;
   
   printf("Enter the number : ");
   scanf("%d",&iValue);

   iRet = MultFact(iValue);

   printf("%d",iRet);

   return 0;
}
