////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : productOfDigits (class logic)
//  Description   : program to calculate product Of Digits of a number
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void productOfDigits(int iNo)
    {
        int iDigit = 0;
        int iProd = 1;   

        while (iNo != 0)
        {
            iDigit = iNo % 10;     
            iProd = iProd * iDigit; 
            iNo = iNo / 10;       
        }

        System.out.println("Product of digits is : " + iProd);

    }
    
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program21_1
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.productOfDigits(234);
    }
} // End of main class
