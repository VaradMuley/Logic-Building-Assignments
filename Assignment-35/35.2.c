////////////////////////////////////////////////////////////
//
//  File name :     35.2.c
//  Description :   This program counts the number of 
//                  small letters in a string
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
//  Function Name : CountSmall
//  Description   : Counts the number of small letters
//                  in the given string
//  Input         : char Arr[]
//  Output        : int
//
////////////////////////////////////////////////////////////
int CountSmall(char Arr[])
{
    int iCnt = 0;
    int iCount = 0;

    while(Arr[iCnt] != '\0')  
    {
        if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
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

    printf("Enter String:\n");
    scanf("%[^\n]", str);   

    iRet = CountSmall(str);

    printf("Frequency of small characters is : %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Modern College       Output : 11
//  Input : JAVA Programming      Output : 10
//  Input : Varad Muley          Output : 10
//
////////////////////////////////////////////////////////////
