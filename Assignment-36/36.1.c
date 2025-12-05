////////////////////////////////////////////////////////////
//
//  File name :     36.1.c
//  Description :   This program converts all capital letters
//                  in a string to small letters
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
//  Function Name : strlwrX
//  Description   : Converts all capital letters in string
//                  to small letters
//  Input         : char str[]
//  Output        : void
//  Author        : Varad Muley
//  Date          : 5/12/2025
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////
void strlwrX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
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
    scanf("%[^'\n']s", Arr);

    strlwrX(Arr);

    printf("Updated String is : %s\n", Arr);
    return 0;
}


////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : HELLO WORLD        Output : hello world
//  Input : Java Programming   Output : java programming
//  Input : Varad Muley      Output : Varad Muley
//  Input : 123 ABC xyz!       Output : 123 abc xyz!
//
////////////////////////////////////////////////////////////