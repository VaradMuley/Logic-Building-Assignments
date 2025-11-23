////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program26_4.java
//  Description :   Accept number from user and display below pattern
//  Input :         Integer
//  Output :        Integer
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
    public void Display(int iNo)
    {
        int iCnt = 0 ;
 

        for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.print("#\t" + iCnt +"\t" + "*\t");
        }
        System.out.println(); 
    }
}


class program26_4
{
    public static void main (String A[])
    {
        Pattern pobj = new Pattern();

        Scanner sobj = new Scanner(System.in);

        int iValue = 0 ;

        System.out.println("Enter the Frequency : ");
        iValue = sobj.nextInt();

        pobj.Display(iValue);

    }
}




/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//  
//  Input :       5
//  Output :      # 1 * # 2 * # 3 * # 4 * # 5 *   
//
//////////////////////////////////////////////////////////////////