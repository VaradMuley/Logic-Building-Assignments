////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program25.2.c
//  Description :   Accept N numbers from user and display all such elements which are 
//                  Divisible by 5 
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



void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt]%5) == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }  
    }
    
}

int main ()
{

   int iSize = 0 ,iCnt = 0;
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

   Display(p ,iSize );


   free(p);

   return 0 ;
}// End of Main 



/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Elements :    85 8 45 863 95 
//  Output :      85 45 95 
//
/////////////////////////////////////////////////////////////////