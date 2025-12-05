////////////////////////////////////////////////////////////
//
//  File name :     37.2.c
//  Description :   This program gives number of occurrences
//                  of a given character in a string
//  Author :        Varad Nitin Muley
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
//  Function Name : CountOccurence
//  Description   : Counts the occurrences of a character
//                  in a given string
//  Input         : char str[], char ch
//  Output        : int
//  Author        : Varad Nitin Muley
//  Date          : 05/12/2025
//  Time Complexity: O(N)
//               
////////////////////////////////////////////////////////////

int CountOccurence(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    char cValue = '\0';

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);            
    
    fflush(stdin);    

    printf("Enter the Character you want to count:\n");
    scanf("%c", &cValue);

    iRet = CountOccurence(Arr, cValue);

    if(iRet > 0)
    {
        printf("Character '%c' occurs %d times in the string.\n", cValue, iRet);
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
//  Output : Character 'o' occurs 2 times in the string.
//
//  Input : JAVAprogram          Character: a
//  Output : Character 'a' occurs 2 times in the string.
//
//  Input : PallaviSABLE         Character: z
//  Output : Character 'z' does not occur in the string.
//
//  Input : 123 ABC xyz!         Character: 1
//  Output : Character '1' occurs 1 times in the string.
//
////////////////////////////////////////////////////////////
