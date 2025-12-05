////////////////////////////////////////////////////////////
//
//  File name :     35.1.c
//  Description :   This program counts the number of 
//                  capital letters in a string
//  Author :        Varad Muley
//  Date :          5/12/2025
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
//  Function Name : CountCapital
//  Description   : Counts the number of capital letters 
//                  in the given string
//  Input         : char[]
//  Output        : int
//
////////////////////////////////////////////////////////////
int CountCapital(char Arr[])
{
    int iCnt = 0;
    int iCount = 0;

    while(Arr[iCnt] != '\0')   
    {
        if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
        {
            iCount++;
        }
        iCnt++;
    }

    return iCount;
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

    printf("Enter String: \n");
    scanf("%[^\n]", str);   

    iRet = CountCapital(str);

    printf("Frequency of Capital characters is : %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello            Output : 1
//  Input : JAVA             Output : 4
//  Input : pallavi          Output : 0
//
////////////////////////////////////////////////////////////
