////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program29_2.c
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

    for (i = 1 ; i <= iRow; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",(j * 2));
            }

            else
            {
                printf("%d\t",((j * 2) - 1));
            }
                
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
//  Input :       iRow = 5  iCol = 5
//
//  Output :      2  4  6  8  10   
//                1  3  5  7  9  
//                2  4  6  8  10 
//                1  3  5  7  9
//
//////////////////////////////////////////////////////////////////