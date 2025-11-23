////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program26_1.c
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


void Display(int iNo)
{
    int iCnt = 0 ;
    char ch = 'A';

    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf( "%c\t",ch);
        ch++;

        if(ch > 'Z')
        {
            ch = 'A';
        }
    }
    printf("\n"); 
}

int main ()
{
    int iValue1 = 0 ;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0 ;

}


/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Output :      A B C D E  
//
//////////////////////////////////////////////////////////////////