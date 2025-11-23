////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program28_2.c
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
    char ch1 = 'A';
    char ch2 = 'a';

    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            if((i % 2) == 1)
            {
                printf( "%c\t ",ch1);
                ch1++;
            }
            else
            {
                printf( "%c\t ",ch2);
                ch2++;
            }
        }
        ch1 = 'A';
        ch2 = 'a';
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
//  Output :      A B C D    
//                a b c d  
//                A B C D  
//                a b c d 
//
//////////////////////////////////////////////////////////////////