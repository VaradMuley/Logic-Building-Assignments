///////////////////////////////////////////////////////
//
//  File name  : 12.4.c
//  Description: Accept number from user and return sum 
//               of even factors of that number
//  Author     : Varad Nitin Muley
//  Date       : 3/11/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
int Sum_Even_Factor(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
        if((iNo%iCnt) == 0)
        {
            if((iCnt %2) == 0)
            {
                iSum = iSum + iCnt;
            }    
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iRet = Sum_Even_Factor(iValue);
    printf("Sum of Even factors is %d",iRet);


    return 0;
}