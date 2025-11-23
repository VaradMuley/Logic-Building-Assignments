////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program29_5.java
//  Description :   Accept numberof rows and columns from user and display pattern 
//  Author :        Varad Nitin Muley
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
import java.util.*;



class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0 ,j = 0;

        for (i = 1 ; i <= iRow ; i++)
        {
            for (j = i; j < iCol+i ; j++) 
            {
                {
                    System.out.print(j +"\t");
                }
            }
            System.out.println();
        }
        System.out.println(); 
    }
}

class program29_5
{
    public static void main (String A[])
    {
        Pattern pobj = new Pattern();

        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0 , iValue2 = 0 ;

        System.out.println("Enter the Number of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Number of columns  : ");
        iValue2 = sobj.nextInt();

        pobj.Display(iValue1 , iValue2);

    }
}




/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       iRow = 4  iCol = 4
//
//  Output :      1  2  3  4      
//                2  3  4  5   
//                3  4  5  6   
//                4  5  6  7
//
//////////////////////////////////////////////////////////////////




