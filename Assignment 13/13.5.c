///////////////////////////////////////////////////////
//
//  File name  : 13.5.c
//  Description: Accept number from user and print sum 
//               of Even numbers till that number on 
//               screen
//  Author     : Varad Nitin Muley
//  Date       : 3/11/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
int Sum_of_Numbers(int ilimit)
{
    if(ilimit <= 0)
    {
        return;
    }
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1 ; iCnt <= ilimit ; iCnt++ )
    {
        if((iCnt % 2 ) == 0)
        {
            iSum = iSum + iCnt;
        }    
    }
    return iSum;
}
int main()
{
    int iLimit = 0;
    int iRet = 0;

    printf("Enter Your Limit\n");
    scanf("%d",&iLimit);

    iRet = Sum_of_Numbers(iLimit);
    printf("Sum Even of Numbers is %d",iRet);
    return 0;
}