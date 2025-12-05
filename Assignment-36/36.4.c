////////////////////////////////////////////////////////////
//
//  File name :     36.4.c
//  Description :   Program to display only the digits
//                  present in the entered string
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
//  Function Name : DisplayDigits
//  Description   : Displays only digits from the string
//  Input         : char str[]
//  Output        : void
//
////////////////////////////////////////////////////////////

void DisplayDigits(char str[])
{
    char *ptr = str;

    printf("Digits in the string are : ");
    while(*ptr != '\0')
    {
        if(*ptr >= '0' && *ptr <= '9')
        {
            printf("%c", *ptr);
        }
        ptr++;
    }
    printf("\n");
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////
int main()
{
    char Arr[100] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    DisplayDigits(Arr);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : a1b2c3       Output : 123
//  Input : Hello2025    Output : 2025
//  Input : 9a8b7c       Output : 987
//  Input : NoDigitsHere Output : (No output)
//
////////////////////////////////////////////////////////////
