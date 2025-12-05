////////////////////////////////////////////////////////////
//
//  File name :     34.5.c
//  Description :   Program to accept a character from user 
//                  and display its decimal, octal, and 
//                  hexadecimal value
//  Author :        Varad Muley
//  Date :          05/12/2025
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description :   Displays ASCII value in decimal, octal,
//                  and hexadecimal for a given character
//  Input :         char
//  Output :        void
//
////////////////////////////////////////////////////////////
void DisplayASCII(char ch)
{
    int i = (int)ch;  

    printf("Decimal Value     : %d\n", i);
    printf("Octal Value       : %o\n", i);
    printf("Hexadecimal Value : %X\n", i);
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    DisplayASCII(cValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : A     Output : Decimal=65   Octal=101   Hex=41
//  Input : a     Output : Decimal=97   Octal=141   Hex=61
//  Input : 0     Output : Decimal=48   Octal=60    Hex=30
//  Input : @     Output : Decimal=64   Octal=100   Hex=40
//
////////////////////////////////////////////////////////////
