////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : checkPalindrome (class logic)
//  Description   : program to check whether number is Palindrome or not
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void checkPalindrome(int iNum)
    {
        int iTemp = iNum;
        int iRev = 0;
        int iDigit = 0;

        while (iNum != 0)
        {
            iDigit = iNum % 10;
            iRev = (iRev * 10) + iDigit;
            iNum = iNum / 10;
        }

        if (iRev == iTemp)
        {
            System.out.println(iTemp + " is a Palindrome number.");
        }
        else
        {
            System.out.println(iTemp + " is NOT a Palindrome number.");
        }
    }
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program17_2
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.checkPalindrome(121);
    }
} // End of main class