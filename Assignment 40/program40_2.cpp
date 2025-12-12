////////////////////////////////////////////////////////////
//
//  File name :     program40_2.cpp
//  Description :   This program prints numbers from 1 to iNo 
//                  using recursive function.
//  Author :        Varad Nitin Muley
//  Date :          12/12/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Prints numbers starting from 1 up to iNo 
//                  using recursion.
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
        cout << iCnt << "\t";
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
//  Output : 1   2   3   4   5
//
//  Input : 3
//  Output : 1   2   3
//
////////////////////////////////////////////////////////////
