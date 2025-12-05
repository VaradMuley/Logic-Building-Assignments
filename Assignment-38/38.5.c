////////////////////////////////////////////////////////////
//
//  File name :     38.4.c
//  Description :   This program toggles the case of all
//                  letters in a given string
//  Author :        Varad Nitin Muley
//  Date :          06/12/2025
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
//  Function Name : StrToggleX
//  Description   : Toggles the case of letters in string
//  Input         : char* str
//  Output        : void
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////
void StrToggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z') 
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')  
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
    scanf("%[^\n]s", Arr);

    StrToggleX(Arr);

    printf("Toggled Case String: %s\n", Arr);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : HelloWorld
//  Output: hELLOwORLD
//
//  Input : Java Programming
//  Output: jAVA pROGRAMMING
//
//  Input : 123 abc XYZ!
//  Output: 123 ABC xyz!
//
////////////////////////////////////////////////////////////
