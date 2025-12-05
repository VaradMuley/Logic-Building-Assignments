////////////////////////////////////////////////////////////
//
//  File name :     38.1.c
//  Description :   This program copies the given string 
//                  into another string in reverse order
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
//  Function Name : ReverseCopy
//  Description   : Copies the input string into another 
//                  string in reverse order
//  Input         : char* src, char* dest
//  Output        : void
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////
void StrCpyRevX(char *src, char *dest)
{
    int iLength = 0;
    int i = 0;

    while(src[iLength] != '\0')
    {
        iLength++;
    }

    iLength--;

    while(iLength >= 0)
    {
        *dest = src[iLength];
        dest++;
        iLength--;
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

    StrCpyRevX(Arr, Brr);

    printf("Reversed Copied String: %s\n", Brr);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello World      
//  Output : dlroW olleH
//
//  Input : Marvellous Infosystems
//  Output : smetsysofnI suollevraM
//
////////////////////////////////////////////////////////////
