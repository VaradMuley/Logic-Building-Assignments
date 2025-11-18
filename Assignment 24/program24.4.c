////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program24.4.c
//  Description :   Accept N numbers from user and display all such numbers which contains
//                  three digit in it 
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


void Digits(int Arr[] , int iLength)
{
   int iCnt = 0 , iTemp =  0 , iCount = 0;
   
   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {

      iTemp = Arr[iCnt];
      iCount = 0;
      
      while(iTemp != 0)
      {
         iTemp = iTemp / 10;
         iCount++;
      }

      if(iCount == 3)
      {
         printf("%d\n",Arr[iCnt]);
      }
   }
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

   Digits(p ,iSize );

   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       6
//  Elements :    10 8775 569 84 1 652
//  Output :      569 652 
//
//  Input :       5
//  Elements :    111 542 45 556 21
//  Output :      111 542 556
//
/////////////////////////////////////////////////////////////////