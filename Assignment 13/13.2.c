///////////////////////////////////////////////////////
//
//  File name  : 13.2.c
//  Description: Accept number from user and print even 
//               number till that number on screen
//  Author     : Varad Nitin Muley
//  Date       : 3/11/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Print_Even_Number(int ilimit)
{
    if(ilimit <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= ilimit ; iCnt++ )
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iLimit = 0;

    printf("Enter Your Limit\n");
    scanf("%d",&iLimit);

    Print_Even_Number(iLimit);
    return 0;
}