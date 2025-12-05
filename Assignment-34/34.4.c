////////////////////////////////////////////////////////////
//
//  File name :     34.4.c
//  Description :   Program to check whether the entered 
//                  character is a special symbol or not
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
//  Function Name : CheckSpecial
//  Description :   Determines whether the entered character 
//                  is a special symbol
//  Input :         character
//  Output :        void
//
////////////////////////////////////////////////////////////

void CheckSpecial(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || 
        (ch >= 'a' && ch <= 'z') || 
        (ch >= '0' && ch <= '9'))
    {
        printf("NOT a Special Symbol.\n");
    }
    else
    {
        printf("It IS a Special Symbol.\n");
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

    printf("Enter a Character:\n");
    scanf("%c", &cValue);

    CheckSpecial(cValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : A     Output : NOT a Special Symbol.
//  Input : z     Output : NOT a Special Symbol.
//  Input : 5     Output : NOT a Special Symbol.
//  Input : @     Output : It IS a Special Symbol.
//  Input : #     Output : It IS a Special Symbol.
//  Input : _     Output : It IS a Special Symbol.
//
//
////////////////////////////////////////////////////////////
