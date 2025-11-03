////////////////////////////////////////////////////////////
//
//  File name :     14.5.c
//  Description :   Accept Number from user and return
//                  Frequency of numbers less than 6 in it
//  Author :        Varad Nitin Muley
//  Date   :        3/11/2025
//
////////////////////////////////////////////////////////////
#include<stdio.h>

int CountFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while( iNo != 0 )
    {
        iDigit = iNo%10;
        if(iDigit <= 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
        
    }   
    return iCount;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);

    printf("Frequency of Digits less than 6 is %d",iRet);
    
}

