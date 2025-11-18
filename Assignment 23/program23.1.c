////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program23.1.c
//  Description :   Accept N numbers from user and accept one another number as No
//                  check whether No is present or not 
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



bool Check(int Arr[] , int iLength,int iNo)
{
   int iCnt = 0 ;
   bool bFlag = false;
   

   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      if(Arr[iCnt] == iNo)
      {
         bFlag = true;
         break;
      }
   }
   
   return bFlag;
}


int main ()
{

   int iSize = 0 ,iCnt = 0 , iValue = 0 ;
   bool bRet = 0;
   int *p = NULL;


   printf("Enter the number of elements : \n");
   scanf("%d",&iSize);

   printf("Enter the number  : \n");
   scanf("%d",&iValue);


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

   bRet = Check(p ,iSize,iValue);

   if(bRet == true)
   {
      printf("Number is present ");
   }
   else
   {
      printf("Number is not present ");
   }
   
   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  No :          20
//  Elements :    10 20 11 26 20
//  Output :      True
//
//  Input :       5
//  No :          11
//  Elements :    10 20 54 45 66
//  Output :      False
//
/////////////////////////////////////////////////////////////////