///////////////////////////////////////////////////////
//
//  File name  : 13.1.c
//  Description: Accept number from user and print 
//               number till that number on screen
//  Author     : Varad Nitin Muley
//  Date       : 3/11/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Print_Number(int ilimit)
{
    if(ilimit <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= ilimit ; iCnt++ )
    {
        printf("%d\t",iCnt);
        
    }
}
int main()
{
    int iLimit = 0;

    printf("Enter Your Limit\n");
    scanf("%d",&iLimit);

    Print_Number(iLimit);
    return 0;
}