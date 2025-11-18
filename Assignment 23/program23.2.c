////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program23.2.c
//  Description :   Accept N numbers from user and accept one another number as No
//                  return index of first occurance of that number
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


int FirstOcc(int Arr[] , int iLength,int iNo)
{
   int iCnt = 0 ;
   int iOcc = 0 ;
   

   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      if(Arr[iCnt] == iNo)
      {
         iOcc = iCnt;
         break;
      }
      else
      {
         iOcc = -1;
      }
   }
   
   return iOcc;
}


int main ()
{

   int iSize = 0 ,iCnt = 0 , iValue = 0 ;
   int iRet = 0;
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

   iRet = FirstOcc(p ,iSize,iValue);

   if(iRet == -1)
   {
      printf("There is no such number ");
   }
   else
   {
      printf("First occurance of number is %d",iRet);
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
//  Output :      1
//
//  Input :       5
//  No :          45
//  Elements :    10 20 54 45 66
//  Output :      3
//
/////////////////////////////////////////////////////////////////