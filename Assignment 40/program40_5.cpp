////////////////////////////////////////////////////////////
//
//  File name :     program40_5.cpp
//  Description :   This program prints characters from 'a' up 
//                  to the number entered by the user using recursion.
//  Author :        Varad Nitin Muley
//  Date :          12/12/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Prints characters starting from 'a' up to iNo 
//                  using recursion.
//  Input         : Integer iNo
//  Output        : Void
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int iCnt = 1;
    static char ch = 'a';

    if(iCnt <= iNo)
    {
        cout << ch << "\t";
        ch++;
        iCnt++;
        Display(iNo);
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 5
//  Output : a   b   c   d   e
//
//  Input : 3
//  Output : a   b   c
//
////////////////////////////////////////////////////////////
