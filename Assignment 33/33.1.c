////////////////////////////////////////////////////////////
//
//  File name :     33.1.c
//  Description :   Program to check whether the entered 
//                  character is an alphabet or not
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
//  Function Name : CheckAlphabet
//  Description :   Checks whether the entered character 
//                  is an alphabet (A–Z or a–z)
//  Input :         char ch
//  Output :        Boolean (true / false)
//
////////////////////////////////////////////////////////////

bool CheckAlphabet(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || 
       (ch >= 'a' && ch <= 'z'))
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

    bRet = CheckAlphabet(ch);

    if(bRet == true)
    {
        printf("It is an Alphabet.\n");
    }
    else
    {
        printf("It is NOT an Alphabet.\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : A     Output : Alphabet
//  Input : z     Output : Alphabet
//  Input : 5     Output : NOT Alphabet
//  Input : @     Output : NOT Alphabet
//
////////////////////////////////////////////////////////////
