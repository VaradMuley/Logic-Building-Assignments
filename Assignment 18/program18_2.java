////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : printEvenNumber (class logic)
//  Description   : program to print all even number up to N
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void printEvenNumber(int iNum)
    {
        int iCnt = 0;

        System.out.println("Even number are the : "+iNum);

        for (iCnt = 1; iCnt <= iNum ; iCnt++)
        {
            if (iCnt % 2 == 0 )
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

class program18_2
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.printEvenNumber(20);
    }
} // End of main class
