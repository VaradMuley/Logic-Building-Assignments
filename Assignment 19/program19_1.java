////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : checkLeapYear (class logic)
//  Description   : program to check whether a given year is leap year or not
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void checkLeapYear(int year)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            System.out.println(year + " is a Leap Year.");
        }
        else
        {
            System.out.println(year + " is NOT a Leap Year.");
        }
    }
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program19_1
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.checkLeapYear(2024);
    }
} // End of main class
