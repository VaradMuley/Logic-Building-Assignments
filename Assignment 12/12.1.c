///////////////////////////////////////////////////////
//
//  File name  : 12.1.c
//  Description: Accept number from user and print 
//               factors of that number
//  Author     : Varad Nitin Muley
//  Date       : 3/11/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Print_Factor(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
        if((iNo%iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;


    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    Print_Factor(iValue);


    return 0;
}