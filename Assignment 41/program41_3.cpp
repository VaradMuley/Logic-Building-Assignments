////////////////////////////////////////////////////////////
//
//  File name :     Program41_3.cpp
//  Description :   Counts the number of alphabetic characters
//                  (small and capital letters) in a given string
//                  using recursion.
//  Author :        Varad Nitin Muley
//  Date :          12/12/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name : Strlen
//  Description   : Counts the number of alphabetic characters
//                  (A–Z and a–z) in the given string using recursion.
//  Input         : Character array (string)
//  Output        : Integer (count of alphabetic characters)
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////

int Strlen(char str[])
{
    static int iCount = 0;

    if(*str != '\0')                     
    {
        if(((*str >= 'a') && (*str <= 'z')) || 
           ((*str >= 'A') && (*str <= 'Z')))
        {
            iCount++;                    
        }

        str++;
        Strlen(str);            
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
    char arr[20];
    int iRet = 0;

    cout << "Enter string : ";
    cin >> arr;

    iRet = Strlen(arr);

    cout << iRet;

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handled by the Application
//
//  Input : Hello123
//  Output : 5
//
//  Input : AbC
//  Output : 3
//
//  Input : 1234
//  Output : 0
//
////////////////////////////////////////////////////////////
