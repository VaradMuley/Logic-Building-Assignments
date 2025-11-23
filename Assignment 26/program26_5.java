////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program26_5.java
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
        int iMult = (iNo * 2);
 

        for (iCnt = 2 ; iCnt <= iMult ; iCnt++,iCnt++)
        {
            System.out.print(iCnt +"\t");
        }
        System.out.println(); 
    }
}


class program26_5
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
//  Output :      2 4 6 8 10   
//
//////////////////////////////////////////////////////////////////