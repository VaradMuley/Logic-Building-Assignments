////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program28_4.c
//  Description :   Accept number from user and display below pattern
//  Input :         Integer
//  Output :        Integer
//  Author :        Varad Nitin Muley
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include <stdio.h>


void Display(int iRow,int iCol)
{
   
    int i = 0 ,j = 0;

    for (i = iRow ; i >= 1; i--)
    {
        for (j = iCol ; j >= 1 ; j--)
        {
            printf( "%d\t ",i);
        }
        printf("\n");
    }
    
    printf("\n"); 
}

int main ()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter the number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0 ;

}




/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       iRow = 4  iCol = 4
//
//  Output :      4 4 4 4   
//                3 3 3 3  
//                2 2 2 2   
//                1 1 1 1 
//
//////////////////////////////////////////////////////////////////