////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : printOddNumber (class logic)
//  Description   : program to print all Odd number up to N
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void printOddNumber(int iNum)
    {
        int iCnt = 0;

        System.out.println("Odd number are the : "+iNum);

        for (iCnt = 1; iCnt <= iNum ; iCnt++)
        {
            if (iCnt % 2 != 0 )
            {
                System.out.println(iCnt);
            }
        }    
    }
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program18_3
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.printOddNumber(20);
    }
} // End of main class
