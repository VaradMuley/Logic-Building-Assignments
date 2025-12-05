////////////////////////////////////////////////////////////
//
//  File name :     33.3.c
//  Description :   Program to check whether the entered 
//                  character is a digit or not
//  Author :        Varad Nitin Muley
//  Date :          04/12/2025
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CheckDigit
//  Description :   Checks whether the entered character 
//                  is a digit (0–9)
//  Input :         char ch
//  Output :        Boolean (true / false)
//
////////////////////////////////////////////////////////////

bool CheckDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter Character:\n");
    scanf(" %c", &ch);

    bRet = CheckDigit(ch);

    if(bRet == true)
    {
        printf("It is a Digit.\n");
    }
    else
    {
        printf("It is NOT a Digit.\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : A     Output : NOT Digit
//  Input : z     Output : NOT Digit
//  Input : 5     Output : Digit
//  Input : @     Output : NOT Digit
//
////////////////////////////////////////////////////////////
