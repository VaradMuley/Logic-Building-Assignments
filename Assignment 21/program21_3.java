////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : displayFactors (class logic)
//  Description   : program to display all factors of a given number
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void displayFactors(int iNo)
    {
        int iCnt = 0;

        System.out.print("Factors are: ");

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                System.out.print( " "+ iCnt );
            }
        }


    }

    
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program21_3
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.displayFactors(12);
    }
} // End of main class
