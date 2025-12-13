////////////////////////////////////////////////////////////
//
//  File name :     Program41_4.cpp
//  Description :   Calculates the factorial of a given number
//                  using recursion.
//  Author :        Varad Nitin Muley
//  Date :          12/12/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Fact
//  Description   : Computes the factorial of the given number
//                  using recursion.
//  Input         : Integer iNo
//  Output        : Integer (factorial of iNo)
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////

int Fact(int iNo)
{
    static int iCnt = iNo;
    static int iFact = 1;

    if(iCnt != 0)                     
    {
        iFact = iFact * iCnt;
        iCnt--;
        Fact(iNo);            
    }

    return iFact;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number : ";
    cin >> iValue;

    iRet = Fact(iValue);

    cout << iRet;

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 5
//  Output : 120
//
//  Input : 3
//  Output : 6
//
//  Input : 1
//  Output : 1
//
////////////////////////////////////////////////////////////
