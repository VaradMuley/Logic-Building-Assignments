////////////////////////////////////////////////////////////
//
//  File name :     38.2.c
//  Description :   This program copies the input string 
//                  into another string by removing all 
//                  white spaces.
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
//  Function Name : StrCpyRemoveSpace
//  Description   : Copies characters from src to dest 
//                  while skipping all white spaces.
//  Input         : char* src, char* dest
//  Output        : void
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////
void StrCpyRemoveSpace(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')       
        {
            *dest = *src;     
            dest++;
        }
        src++;
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

    StrCpyRemoveSpace(Arr, Brr);

    printf("Updated String : %s\n", Brr);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello World
//  Output: HelloWorld
//
//  Input : Marvellous Infosystems Pune
//  Output: MarvellousInfosystemsPune
//
//  Input : ABC
//  Output: ABC
//
////////////////////////////////////////////////////////////
