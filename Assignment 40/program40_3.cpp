////////////////////////////////////////////////////////////
//
//  File name :     program40_3.cpp
//  Description :   This program prints numbers from iNo down 
//                  to 1 using recursive function.
//  Author :        Varad Nitin Muley
//  Date :          12/12/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Prints numbers from iNo down to 1 using recursion.
//  Input         : Integer iNo
//  Output        : Void
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int iCnt = iNo;

    if(iCnt >= 1)
    {
        cout << iCnt << "\t";
        iCnt--;
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
//  Output : 5   4   3   2   1
//
//  Input : 3
//  Output : 3   2   1
//
////////////////////////////////////////////////////////////
