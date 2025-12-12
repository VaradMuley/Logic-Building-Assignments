////////////////////////////////////////////////////////////
//
//  File name :     program40_1.cpp
//  Description :   This program prints '*' symbol as many 
//                  times as the user enters, using recursion.
//  Author :        Varad Nitin Muley
//  Date :          12/12/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Prints '*' symbol iNo times using recursion.
//  Input         : Integer iNo
//  Output        : Void
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        cout << " * \t";
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
//  Output : *   *   *   *   *
//
//  Input : 3
//  Output : *   *   *
//
////////////////////////////////////////////////////////////
