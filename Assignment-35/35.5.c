////////////////////////////////////////////////////////////
//
//  File name :     35.5.c
//  Description :   This program reverses a string
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
//  Function Name : ReverseX
//  Description   : Reverses the given string in-place
//  Input         : char* str
//  Output        : void
//
////////////////////////////////////////////////////////////
void ReverseX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';


    while(*end != '\0')
    {
        end++;
    }
    end--; 

    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^\n]s", Arr);

    ReverseX(Arr);

    printf("Updated String: %s\n", Arr);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello World      Output : dlroW olleH
//  Input : varad          Output : darav
//  Input : CProgramming     Output : gnimmargorPC
//
////////////////////////////////////////////////////////////
