////////////////////////////////////////////////////////////
//
//  File name :     35.4.c
//  Description :   This program counts the number of vowels
//                  in a string
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
//  Function Name : CountVowels
//  Description   : Counts number of vowels in the given string
//  Input         : char str[]
//  Output        : int
//  Author        : Varad Muley
//  Date          : 5/12/2025
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////
int CountVowels(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^\n]s", Arr);            

    iRet = CountVowels(Arr);
    printf("Number of Vowels in String is : %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello World      Output : 3
//  Input : JAVA Program     Output : 4
//  Input : varad          Output : 3
//
////////////////////////////////////////////////////////////