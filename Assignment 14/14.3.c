////////////////////////////////////////////////////////////
//
//  File name :     14.3.c
//  Description :   Accept Number from user and count 
//                  Frequency of 2 in it
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
        if(iDigit == 2)
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

    printf("Frequency of 2 is %d",iRet);
    
}

