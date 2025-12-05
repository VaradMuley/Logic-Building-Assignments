////////////////////////////////////////////////////////////
//
//  File name :     36.5.c
//  Description :   This program counts the number of spaces
//                  in a string
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
//  Function Name : CountSpaces
//  Description   : Counts the number of spaces in the string
//  Input         : char str[]
//  Output        : void
//  Author        : Varad Muley
//  Date          : 5/12/2025
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////
void CountSpaces(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }

    printf("Number of Spaces is : %d\n", iCount);
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    CountSpaces(Arr);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello World                  Output : 1
//  Input : This is a test               Output : 3
//  Input : NoSpacesHere                 Output : 0
//  Input : Multiple Spaces Here         Output : 4
//
////////////////////////////////////////////////////////////
