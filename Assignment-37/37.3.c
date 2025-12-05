////////////////////////////////////////////////////////////
//
//  File name :     37.3.c
//  Description :   This program returns the index of the 
//                  first occurrence of a given character in a string
//  Author :        Varad Nitin Muley
//  Date :          05/12/2025
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : FirstOccurrence
//  Description   : Returns the index of first occurrence of 
//                  a character in a given string (-1 if not found)
//  Input         : char str[], char ch
//  Output        : int
//  Author        : Varad Nitin Muley
//  Date          : 05/12/2025
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

int FirstOccurrence(char str[], char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return iCnt;  
        }
        iCnt++;
    }

    return -1;  
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

    iRet = FirstOccurrence(Arr, cValue);

    if(iRet != -1)
    {
        printf("Character '%c' first occurs at index %d.\n", cValue, iRet);
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
//  Output : Character 'o' first occurs at index 4
//
//  Input : JAVAprogram          Character: a
//  Output : Character 'a' first occurs at index 1
//
//  Input : Varad Nitin Muley      Character: z
//  Output : Character 'z' does not occur in the string
//
//  Input : 123 ABC xyz!         Character: 1
//  Output : Character '1' first occurs at index 0
//
////////////////////////////////////////////////////////////
