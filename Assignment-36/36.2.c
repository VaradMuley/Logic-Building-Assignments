////////////////////////////////////////////////////////////
//
//  File name :     36.2.c
//  Description :   This program converts all small letters
//                  in a string to capital letters
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
//  Function Name : struprX
//  Description   : Converts all small letters in string
//                  to capital letters
//  Input         : char str[]
//  Output        : void
//  Author        : Varad Muley
//  Date          : 05/12/2025
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////
void struprX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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

    struprX(Arr);

    printf("Updated String is : %s\n", Arr);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : hello world        Output : HELLO WORLD
//  Input : Java Programming   Output : JAVA PROGRAMMING
//  Input : Varad Muley     Output : Varad Muley
//  Input : 123 abc XYZ!       Output : 123 ABC XYZ!
//
////////////////////////////////////////////////////////////
