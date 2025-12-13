////////////////////////////////////////////////////////////
//
//  File name :     Program41_5.cpp
//  Description :   Calculates the multiplication of digits of a
//                  given number using recursion.
//  Author :        Varad Nitin Muley
//  Date :          12/12/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Mult
//  Description   : Computes the multiplication of all digits of
//                  the given number using recursion.
//  Input         : Integer iNo
//  Output        : Integer (multiplication of digits)
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////

int Mult(int iNo)
{
    static int iMult = 1;
    int iDigit = 1;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iMult = iMult * iDigit;

        Mult(iNo);
    }

    return iMult;
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

    iRet = Mult(iValue);

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
//  Input : 405
//  Output : 0
//
//  Input : 7
//  Output : 7
//
////////////////////////////////////////////////////////////
