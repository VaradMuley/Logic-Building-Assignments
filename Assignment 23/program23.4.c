////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program23.3.c
//  Description :   Accept N numbers from user and accept Range , Display all elements from 
//                  that range 
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


int Range(int Arr[] , int iLength,int iNo1,int iNo2)
{
   int iCnt = 0 ;
  
   
   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      if(Arr[iCnt] >= iNo1 && Arr[iCnt] <= iNo2)
      {
         printf("%d \n",Arr[iCnt]);
      }
   }
   

   return 0;
}

int main ()
{

   int iSize = 0 ,iCnt = 0 , iValue1 = 0 , iValue2 = 0 ;
   int iRet = 0;
   int *p = NULL;


   printf("Enter the number of elements : \n");
   scanf("%d",&iSize);

   printf("Enter the Starting point : \n");
   scanf("%d",&iValue1);

   printf("Enter the Ending point : \n");
   scanf("%d",&iValue2);


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

   iRet = Range(p ,iSize, iValue1 ,iValue2);
   
   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Start :       60
//  End :         90
//  Elements :    10 88 45 65 77
//  Output :      88 , 65 , 77 
//
//  Input :       5
//  Start :       60
//  End :         90
//  Elements :    10 88 45 65 77
//  Output :      88 , 65 , 77 
//
/////////////////////////////////////////////////////////////////