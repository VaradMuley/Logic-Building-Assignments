////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program22.2.c
//  Description :   Accept N numbers from user and return frequency difference between
//                  frequency of even number and odd number  
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


int Frequency(int Arr[] , int iLength)
{
   int iCnt = 0 ,iCountEven = 0 , iCountOdd = 0;
   int iDiff = 0 ;

   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      if((Arr[iCnt] %2) == 0)
      {
         iCountEven++;
      }
      else
      {
         iCountOdd++;
      }
      
   }
   
   iDiff = iCountEven - iCountOdd;

   return iDiff;
}


int main ()
{

   int iSize = 0 ,iRet = 0 ,iCnt = 0 ;
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

   iRet = Frequency(p ,iSize);

   printf("Difference is : %d\n",iRet);
   
   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Elements :    10 20 33 26 45 
//
//  Output :      1(3-2)
//   
/////////////////////////////////////////////////////////////////