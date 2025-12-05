////////////////////////////////////////////////////////////
//
//  File name :     33.4.c
//  Description :   Program to check whether the entered 
//                  character is a small alphabet or not
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
//  Function Name : CheckSmall
//  Description :   Checks whether the entered character 
//                  is a small alphabet (a–z)
//  Input :         char ch
//  Output :        Boolean (true / false)
//
////////////////////////////////////////////////////////////

bool CheckSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter Character:\n");
    scanf(" %c", &ch);

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("It is Small.\n");
    }
    else
    {
        printf("It is NOT Small.\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : a      Output : It is Small.
//  Input : z      Output : It is Small.
//  Input : A      Output : It is NOT Small.
//  Input : 9      Output : It is NOT Small.
//  Input : @      Output : It is NOT Small.
//
////////////////////////////////////////////////////////////
