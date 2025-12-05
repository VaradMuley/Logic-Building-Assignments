////////////////////////////////////////////////////////////
//
//  File name :     35.3.c
//  Description :   Program to count difference between 
//                  small and capital letters in a string
//  Author :        Varad Muley
//  Date :          05/12/2025
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CountDifference
//  Description   : Counts difference between small and 
//                  capital letters in the given string
//  Input         : char Arr[]
//  Output        : int
//
////////////////////////////////////////////////////////////
int CountDifference(char Arr[])
{
    int iCnt = 0;
    int iSmall = 0;
    int iCapital = 0;

    while (Arr[iCnt] != '\0')
    {
        if (Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
        {
            iSmall++;
        }
        else if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
        {
            iCapital++;
        }
        iCnt++;
    }

    return (iSmall - iCapital);
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////
int main()
{
    char str[100];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^\n]s", str);

    iRet = CountDifference(str);

    printf("Difference : %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : HelloWorld          Output : 3
//  Input : JAVAprogram          Output : 3
//  Input : VaradMULEY         Output : 1
//
////////////////////////////////////////////////////////////
