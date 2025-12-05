////////////////////////////////////////////////////////////
//
//  File name :     37.1.c
//  Description :   Program to check if a character exists in a string
//  Author :        Varad Nitin Muley
//  Date :          05/12/2025
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////
//
//  Function Name : IsCharPresent
//  Description   : Checks whether a character exists in string
//  Input         : char str[], char ch
//  Output        : bool 
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////
bool CheckOccurence(char str[], char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        str++;
    }
    return false;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    fflush(stdin);

    printf("Enter the character to check:\n");
    scanf("%c", &cValue);

    bRet = CheckOccurence(Arr, cValue);

    if(bRet == true)
    {
        printf("Character '%c' exists in the string.\n", cValue);
    }
    else
    {
        printf("Character '%c' does NOT exist in the string.\n", cValue);
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello World, Character : l
//  Output: Character 'l' exists in the string.
//
//  Input : Hello World, Character : z
//  Output: Character 'z' does NOT exist in the string.
//
//  Input : ABCabc, Character : A
//  Output: Character 'A' exists in the string.
//
////////////////////////////////////////////////////////////
