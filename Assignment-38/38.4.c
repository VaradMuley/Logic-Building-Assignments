////////////////////////////////////////////////////////////
//
//  File name :     38.4.c
//  Description :   This program copies the input string 
//                  into another string by converting 
//                  capital letters to small letters.
//  Author :        Varad Nitin Muley
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
//  Function Name : StrCpyCap
//  Description   : Copies src to dest and converts 
//                  capital letters to small letters
//  Input         : char* src, char* dest
//  Output        : void
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////
void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))     
        {
            *dest = *src + 32;   
        }
        else
        {
            *dest = *src;        
        }

        src++;
        dest++;
    }

    *dest = '\0';   
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^\n]s", Arr);

    StrCpyCap(Arr, Brr);

    printf("Updated String (Small Copy): %s\n", Brr);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello World
//  Output: hello world
//
//  Input : aBcDeF123
//  Output: abcdef123
//
//  Input : MARVELLOUS infosystems
//  Output: marvellous infosystems
//
////////////////////////////////////////////////////////////
