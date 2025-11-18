////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program25.1.c
//  Description :   Accept N numbers from user and return difference betwwn summation of even 
//                  elements and summation of odd elements 
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



int Difference(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }  
    }
    return (iSum1 - iSum2);


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

   iRet = Difference(p ,iSize );

   printf("Difference is : %d\n",iRet);

   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       6
//  Elements :    85 66 3 80 93 88
//  Output :      53 (234 - 181)
//
/////////////////////////////////////////////////////////////////