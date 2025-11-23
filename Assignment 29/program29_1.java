////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program29_1.java
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
        int iNum = 1;
 
        for (i = 1 ; i <= iRow ; i++)
        {
            for (j = 1 ; j <= iCol ; j++)
            {
                System.out.print(iNum + "\t");
                iNum++;
                
                if(iNum > 9)
                {
                    iNum = 1;
                }
            }
            
            System.out.println();
        }
        System.out.println(); 
    }
}

class program29_1
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
//  Output :      1   2   3   4    
//                5   6   7   8  
//                9   1   2   3  
//                4   5   6   7 
//
//////////////////////////////////////////////////////////////////