////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program29_2.java
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
            for (j = 1 ; j <= iCol ; j++)
            {
                if((i % 2) != 0)
                {
                    System.out.print((j * 2) + "\t");
                }

                else
                {
                    System.out.print(((j*2) - 1)+ "\t");
                }
                
            }
            
            System.out.println();
        }
        System.out.println(); 
    }
}

class program29_2
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
//  Input :       iRow = 5  iCol = 5
//
//  Output :      2  4  6  8  10   
//                1  3  5  7  9  
//                2  4  6  8  10 
//                1  3  5  7  9
//
//////////////////////////////////////////////////////////////////