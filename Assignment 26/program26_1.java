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
        char ch = 'A';

        for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.print(ch + "\t");
            ch++;

            if(ch > 'Z')
            {
                ch = 'A';
            }
        }
        System.out.println(); 
    }
}


class program26_1
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
//  Output :      A B C D E  
//
//////////////////////////////////////////////////////////////////