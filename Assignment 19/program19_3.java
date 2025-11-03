////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : checkDivisible (class logic)
//  Description   : program to check whether a number is divisible by 5 & 11 / not 
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void checkDivisible(int iNum)
    {
        if (iNum % 5 == 0)
        {
            System.out.println("It is divisible by 5 = " +iNum);
        }
        else if (iNum % 11 == 0)
        {
            System.out.println("It is divisible by 11 = " +iNum);
        }
        else
        {
            System.out.println("It is not divisible by 5 or 11= " +iNum);
        }  
    }
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program19_3
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.checkDivisible(55);
    }
} // End of main class
