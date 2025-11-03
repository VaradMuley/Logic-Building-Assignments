////////////////////////////////////////////////////////////
//
//  File name :     14.1.c
//  Description :   Accept Number from useer and Display 
//                  Digits in Reverse Order
//  Author :        Varad Nitin Muley
//  Date   :        3/11/2025
//
////////////////////////////////////////////////////////////
#include<stdio.h>

int DisplayDigits(int iNo)
{
    int iDigit = 0;

    while( iNo != 0 )
    {
        iDigit = iNo%10;
        iNo = iNo / 10;
        printf("%d\n",iDigit);
    }   
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    
}

