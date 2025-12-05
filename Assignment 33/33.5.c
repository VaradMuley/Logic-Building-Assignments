////////////////////////////////////////////////////////////
//
//  File name :     33.5.c
//  Description :   Program to display exam timing based on
//                  the entered division (A, B, C, D)
//  Author :        Varad Nitin Muley
//  Date :          04/12/2025
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
//  Function Name : DisplaySchedule
//  Description :   Displays exam timing based on division
//  Input :         char ch
//  Output :        void
//
////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    
    if ((ch == 'A') && (ch == 'a'))
    {
        printf("Your exam is at 7:00 AM\n");
    }
    else if ((ch == 'B') && (ch == 'b'))
    {
        printf("Your exam is at 8:30 AM\n");
    }
    else if ((ch == 'C') && (ch == 'c'))
    {
        printf("Your exam is at 9:20 AM\n");
    }
    else if ((ch == 'D') && (ch == 'd'))
    {
        printf("Your exam is at 10:30 AM\n");
    }
    else
    {
        printf("Invalid Division.\n");
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    char ch;

    printf("Enter Division (A/B/C/D):\n");
    scanf(" %c", &ch);

    DisplaySchedule(ch);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : A     Output : Your exam is at 7:00 AM
//  Input : b     Output : Your exam is at 8:30 AM
//  Input : C     Output : Your exam is at 9:20 AM
//  Input : d     Output : Your exam is at 10:30 AM
//  Input : X     Output : Invalid Division.
//
////////////////////////////////////////////////////////////
