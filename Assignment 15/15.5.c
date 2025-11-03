////////////////////////////////////////////////////////////
//
//  File name :     15.5.c
//  Description :   Accept Number from user and return
//                  the diffrence between sum of its even
//                  digits and odd Digits
//  Author :        Varad Nitin Muley
//  Date   :        3/11/2025
//
////////////////////////////////////////////////////////////
#include<stdio.h>

int SumDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while( iNo != 0 )
    {
        iDigit = iNo%10;
        {
            if((iDigit%2) == 0)
            {
                iSum1 = iSum1+iDigit;
            }    

            if((iDigit%2) != 0)
            {
                iSum2 = iSum2+iDigit;
            }  
        }

        iNo = iNo / 10;
        
    }   
    return (iSum1-iSum2);
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SumDiff(iValue);

    printf("Sum of even digits and odd Digits %d",iRet);
    
}

