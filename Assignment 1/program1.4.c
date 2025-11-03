////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program1.4.c
//  Description :   Accept one number and check whether it is divisible by 5 or not
//  Author :        Varad Nitin Muley
//  Date :          31/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

bool Check (int iNo)
{
    if ((iNo % 5 ) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main ()
{
    int iValue = 0;
    int bRet = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if (bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}

