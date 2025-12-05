////////////////////////////////////////////////////////////
//
//  File name :     34.2.c
//  Description :   Program to toggle the case of the
//                  entered character
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
//  Function Name : Toggle
//  Description :   Toggles the case of the entered character
//  Input :         char ch
//  Output :        void
//
////////////////////////////////////////////////////////////

void Toggle(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        char Csmall = ch + 32;
        printf("Toggled Character: %c\n", Csmall);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        
        char Ccapital = ch - 32;
        printf("Toggled Character: %c\n", Ccapital);
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
    char ch = '\0';

    printf("Enter Character:\n");
    scanf("%c", &ch);

    Toggle(ch);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : A     Output : a
//  Input : Z     Output : z
//  Input : a     Output : A
//  Input : m     Output : M
//  Input : 9     Output : Invalid Character.
//  Input : @     Output : Invalid Character.
//
////////////////////////////////////////////////////////////
