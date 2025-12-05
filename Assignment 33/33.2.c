////////////////////////////////////////////////////////////
//
//  File name :     33.2.c
//  Description :   Program to check whether the entered 
//                  character is a capital alphabet or not
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
//  Function Name : CheckCapital
//  Description :   Checks whether the entered character 
//                  is a capital alphabet (A–Z)
//  Input :         char ch
//  Output :        Boolean (true / false)
//
////////////////////////////////////////////////////////////

bool CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("It is Capital.\n");
    }
    else
    {
        printf("It is NOT Capital.\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : A      Output : It is Capital.
//  Input : Z      Output : It is Capital.
//  Input : a      Output : It is NOT Capital.
//  Input : 9      Output : It is NOT Capital.
//  Input : @      Output : It is NOT Capital.
//
////////////////////////////////////////////////////////////
