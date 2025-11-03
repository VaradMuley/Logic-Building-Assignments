///////////////////////////////////////////////////////
//
//  File name  : 12.1.c
//  Description: Accept number from user and count 
//               factors of that number
//  Author     : Varad Nitin Muley
//  Date       : 3/11/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
int Count_Factor(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
        if((iNo%iCnt) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iRet = Count_Factor(iValue);
    printf("Number of factors is %d",iRet);


    return 0;
}