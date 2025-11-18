////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program24.1.c
//  Description :   Accept N numbers from user and return the largest number
//  Input :         Integer
//  Output :        Integer
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[] , int iLength)
{
   int iCnt = 0 ;
   int iMax = 0;
  
   
   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
     if((Arr[iCnt] > iMax))
     {
         iMax = Arr[iCnt];
     }
   }
   
   return iMax;
}

int main ()
{

   int iSize = 0 ,iCnt = 0;
   int iRet = 0;
   int *p = NULL;


   printf("Enter the number of elements : \n");
   scanf("%d",&iSize);

   p = (int *)malloc(iSize * sizeof(int));

   if(p == NULL)
   {
      printf("Unable to allocate the memory \n");
      return -1;
   }

   printf("Enter the elements : \n");
   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
      scanf("%d",&p[iCnt]);
   }

   iRet = Maximum(p ,iSize );

   printf("Largest Number is : %d",iRet);
   
   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Elements :    10 88 3 9 78
//  Output :      88
//
//  Input :       5
//  Elements :    10 96 4 8 78
//  Output :      96
//
/////////////////////////////////////////////////////////////////