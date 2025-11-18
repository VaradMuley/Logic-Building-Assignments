////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program24.2.c
//  Description :   Accept N numbers from user and return the Smallest number
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


int Minimum(int Arr[] , int iLength)
{
   int iCnt = 0 ;
   int iMin = Arr[0];
  
   
   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
     if((Arr[iCnt] < iMin))
     {
         iMin = Arr[iCnt];
     }
   }
   
   return iMin;
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

   iRet = Minimum(p ,iSize );

   printf("Smallest Number is : %d",iRet);
   
   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Elements :    10 88 3 9 78
//  Output :      3
//
//  Input :       5
//  Elements :    10 96 4 8 78
//  Output :      4
//
/////////////////////////////////////////////////////////////////