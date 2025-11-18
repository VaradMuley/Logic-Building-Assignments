////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program24.5.c
//  Description :   Accept N numbers from user and display Summation of digits of each number 
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


void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0, itemp = 0, iDigit = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        itemp = Arr[iCnt];   
        iSum = 0;            

        while(itemp != 0)
        {
            iDigit = itemp % 10;  
            iSum = iSum + iDigit; 
            itemp = itemp / 10;   
        }

        printf("%d\n", iSum);
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

   DigitsSum(p ,iSize );

   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       6
//  Elements :    10 8775 569 84 1 652
//  Output :      1   27  20  12 1 13 
//
//  Input :       5
//  Elements :    111  45 123 63 556
//  Output :      3    9   6   9  16  
//
/////////////////////////////////////////////////////////////////