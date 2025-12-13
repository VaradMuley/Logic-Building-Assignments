////////////////////////////////////////////////////////////
//
//  File name :     Program41_2.cpp
//  Description :   Calculates the summation of digits of a given
//                  number using recursion.
//  Author :        Varad Nitin Muley
//  Date :          12/12/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Sum
//  Description   : Computes the sum of digits of the given number
//                  using recursion.
//  Input         : Integer iNo
//  Output        : Integer (Sum of digits)
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    static int iCnt = iNo;
    static int iSum = 0;
    int iDigit = 0;
    
    if(iCnt != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
        iCnt--;

        Sum(iNo);
    }

    return iSum;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    iRet = Sum(iValue);

    cout << iRet;

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : 123
//  Output : 6
//
//  Input : 456
//  Output : 15
//
//  Input : 5
//  Output : 5
//
////////////////////////////////////////////////////////////
