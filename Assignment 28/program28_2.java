////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program28_2.java
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
        char ch1 = 'A';
        char ch2 = 'a';
 
        for (i = 1 ; i <= iRow ; i++)
        {
            for (j = 1 ; j <= iCol ; j++)
            {
                if((i % 2) == 1)
                {
                    System.out.print( ch1 +"\t ");
                    ch1++;
                }
                else
                {
                    System.out.print( ch2 +"\t ");
                    ch2++; 
                }
                
            }
            ch1 = 'A';
            ch2 = 'a';
            System.out.println();
        }
       
        System.out.println(); 
    }
}

class program28_2
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
//  Output :      A B C D    
//                a b c d  
//                A B C D  
//                a b c d 
//
//////////////////////////////////////////////////////////////////