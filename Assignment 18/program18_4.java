////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : sumEvenOddDigits (class logic)
//  Description   : program to print all Even and Odd digits separately number
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void sumEvenOddDigits(int iNum)
    {
        int iTemp = iNum;
        int iCnt = 0;

        System.out.println("Even number are the : "+iNum);

        while (iTemp != 0)
        {
            iCnt = iTemp % 10;
            if (iCnt % 2 == 0 )
            {
                System.out.println(iCnt);
            }
            iTemp = iTemp / 10;
        }

        iTemp = iNum;
        System.out.println("Odd number are the : "+iNum);

        while (iTemp != 0)
        {
            iCnt = iTemp % 10;
            if (iCnt % 2 != 0 )
            {
                System.out.println(iCnt);
            }
            iTemp = iTemp / 10;
        }  
    }
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program18_4
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.sumEvenOddDigits(123456);
    }
} // End of main class
