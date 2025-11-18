////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program22.1.c
//  Description :   Accept N numbers from user and return frequency of even numbers 
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


int CountEven(int Arr[] , int iLength)
{
   int iCnt = 0 ,iCount = 0 ;
   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      if((Arr[iCnt] %2) == 0)
      {
         iCount++;
      }
   }
   return iCount;

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

   iRet = CountEven(p ,iSize);

   printf("Event elemets are : %d\n",iRet);
   
   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Elements :    10 20 33 25 45 
//
//  Output :      2
//   
/////////////////////////////////////////////////////////////////