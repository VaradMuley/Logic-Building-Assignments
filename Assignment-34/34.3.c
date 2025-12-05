////////////////////////////////////////////////////////////
//
//  File name :     34.3.c
//  Description :   Program to display characters based on
//                  the entered character
//                  (Capital → char to Z)
//                  (Small   → char to a in reverse)
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
//  Function Name : ToggleDisplay
//  Description :   Displays characters based on the case
//                  of the entered character
//  Input :         char ch
//  Output :        void
//
////////////////////////////////////////////////////////////

void ToggleDisplay(char ch)
{
    char cCnt = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid Character.\n");
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter Character:\n");
    scanf("%c", &cValue);

    ToggleDisplay(cValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : A     Output : A B C ... Z
//  Input : M     Output : M N O ... Z
//  Input : a     Output : a z y x ... a
//  Input : m     Output : m l k ... a
//  Input : 9     Output : Invalid Character.
//  Input : @     Output : Invalid Character.
//
////////////////////////////////////////////////////////////
