////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : countEvenOddRange (class logic)
//  Description   : pro.to count how many even & odd number present between 1 & N
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void countEvenOddRange(int iNo)
    {
        int iCnt = 0;
        int iEven = 0;
        int iOdd = 0;

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }
        }

        System.out.println("Even number is : "+iEven);
        System.out.println("Odd number is : "+iOdd);

    }
    
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program21_2
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.countEvenOddRange(50);
    }
} // End of main class
