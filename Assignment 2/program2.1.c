////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.1.c
//  Description :   Accept one number from user and print that number of * on screen
//  Author :        Varad Nitin Muley
//  Date :          31/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

