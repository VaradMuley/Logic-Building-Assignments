////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program23.3.c
//  Description :   Accept N numbers from user and return product of all odd elements
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


int Range(int Arr[] , int iLength)
{
   int iCnt = 0 ;
   int iMult = 1;
  
   
   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
     if((Arr[iCnt] % 2 ) != 0)
     {
         iMult = iMult * Arr[iCnt];
     }
   }
   
   return iMult;
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

   iRet = Range(p ,iSize );

   printf("Product of odd numbers is : %d",iRet);
   
   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Elements :    10 88 3 9 78
//  Output :      27
//
//  Input :       5
//  Elements :    10 88 4 8 78
//  Output :      0
//
/////////////////////////////////////////////////////////////////