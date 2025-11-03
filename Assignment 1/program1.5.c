////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.5.c
//  Description :   Accept one number from user and print that number of * on screen
//  Author :        Varad Nitin Muley
//  Date :          31/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*");
    }
}
int main ()
{
    int iValue = 0 ;
    iValue = 5;

    Accept(iValue);
    return 0;
}

