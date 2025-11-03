////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : printTable (class logic)
//  Description   : program to print the multiplication table of a number
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void printTable(int iNum)
    {
        int iCnt = 0;
        int iTable = 0;

        System.out.println("Tbale is : "+iNum);

        for (iCnt = 1; iCnt <= 10 ; iCnt++)
        {
            iTable = iNum * iCnt;
            System.out.println(+iTable); 
        }
    }
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program17_5
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.printTable(5);
    }
} // End of main class
