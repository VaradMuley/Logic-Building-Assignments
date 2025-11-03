////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : printDigits (class logic)
//  Description   : program to print each digits seperately 
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void printDigits(int iNum)
    {
        int iTemp = iNum;
        int iDigit = 0; 

        System.out.println(+iNum);

        while (iTemp != 0)
        {
            iDigit = iTemp % 10; 
            System.out.println(iDigit);
            iTemp = iTemp / 10;  
        }
    }
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program19_4
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.printDigits(9876);
    }
} // End of main class
