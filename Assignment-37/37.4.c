////////////////////////////////////////////////////////////
//
//  File name :     37.4.c
//  Description :   This program returns the index of the 
//                  last occurrence of a given character in a string
//  Author :        Varad Nitin Muley
//  Date :          05/12/2025
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : LastOccurrence
//  Description   : Returns the index of last occurrence of 
//                  a character in a given string (-1 if not found)
//  Input         : char str[], char ch
//  Output        : int
//  Author        : Varad Nitin Muley
//  Date          : 05/12/2025
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

int LastOccurrence(char str[], char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iPos = iCnt;     
        }
        iCnt++;
    }

    return iPos;   
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    fflush(stdin);

    printf("Enter the Character to find:\n");
    scanf("%c", &cValue);

    iRet = LastOccurrence(Arr, cValue);

    if(iRet != -1)
    {
        printf("Character '%c' last occurs at index %d.\n", cValue, iRet);
    }
    else
    {
        printf("Character '%c' does not occur in the string.\n", cValue);
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : HelloWorld          Character: o
//  Output : Character 'o' last occurs at index 7
//
//  Input : JAVAprogram         Character: a
//  Output : Character 'a' last occurs at index 7
//
//  Input : Hello       Character: l
//  Output : Character 'l' last occurs at index 3
//
//  Input : 123 ABC 123         Character: 1
//  Output : Character '1' last occurs at index 10
//
////////////////////////////////////////////////////////////
