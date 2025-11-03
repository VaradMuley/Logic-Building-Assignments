////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : calculatePower (class logic)
//  Description   : program to calcalculate the Power of a number 
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void calculatePower(int base , int exp)
    {
        int iCnt = 0;
        int result = 1;

        for (iCnt = 1; iCnt <= exp; iCnt++)
        {
            result = result * base;
        }

        System.out.println("calculate Power is : " + result);
    }
    
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program19_5
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.calculatePower(2 , 5);
    }
} // End of main class
