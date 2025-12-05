////////////////////////////////////////////////////////////
//
//  File name :     36.3.c
//  Description :   This program toggles the case of all
//                  letters in a string
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
//  Function Name : strtoggleX
//  Description   : Toggles the case of letters in string
//  Input         : char str[]
//  Output        : void
//  Author        : Varad Muley
//  Date          : 5/12/2025
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////
void strtoggleX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
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

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);            

    strtoggleX(Arr);

    printf("Updated String is : %s\n", Arr);
    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : HelloWorld      Output : hELLOwORLD
//  Input : Java Programming Output : jAVA pROGRAMMING
//  Input : Varad Muley    Output : Varad Muley
//
////////////////////////////////////////////////////////////
