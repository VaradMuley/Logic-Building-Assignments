////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program22.3.c
//  Description :   Accept N numbers from user and check whether that number contains 
//                  11 in it or not 
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
#include<stdbool.h>


bool Frequency(int Arr[] , int iLength)
{
   int iCnt = 0 ;
   bool bFlag = false;

   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      if(Arr[iCnt] == 11)
      {
         bFlag = true;
         break;
      }
   }
   
   return bFlag;
}


int main ()
{

   int iSize = 0 ,iCnt = 0 ;
   bool bRet = false;
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

   bRet = Frequency(p ,iSize);

   if(bRet == true)
   {
      printf("11 is present ");
   }
   else
   {
      printf("11 is not present ");
   }
   
   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Elements :    10 20 11 26 45 
//  Output :      11 is present 
//
//  Input :       5
//  Elements :    10 20 55 26 45 
//  Output :      11 is not  present 
//
/////////////////////////////////////////////////////////////////