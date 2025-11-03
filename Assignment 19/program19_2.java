////////////////////////////////////////////////////////////////////////////////
//
//  Method Name   : displayGrade (class logic)
//  Description   : program to display grade on a student best on mark
//  Input         : Integer
//  Output        : Integer
//  Author        : Varad Nitin Muley
//  Date          : 03/11/2025
//
////////////////////////////////////////////////////////////////////////////////

class logic 
{
    void displayGrade(int marks)
    {
        if (marks >= 80 && marks <= 100)
        {
            System.out.println("Grade A = " +marks);
        }
        else if (marks >= 60 && marks <= 79)
        {
            System.out.println("Grade B = " +marks);
        }
        else if (marks >= 50 && marks <= 59)
        {
            System.out.println("Grade C = " +marks);
        }
        else if (marks >= 30 && marks <= 49)
        {
            System.out.println("Grade D = " +marks);
        }
        else if (marks >= 0 && marks <= 29)
        {
            System.out.println("your fail = " +marks);
        }
        else
        {
            System.out.println("Invalid marks: " + marks);
        }  
    }
} // End of Method

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Method for the application
//
////////////////////////////////////////////////////////////////////////////////

class program19_2
{
    public static void main(String A[])
    {
        logic obj = new logic();
        obj.displayGrade(82);
    }
} // End of main class
