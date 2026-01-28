////////////////////////////////////////////////////////////
//
//  File name :     four.java
//  Description :   Calculates checksum of file
//  Author :        Pallavi Sable
//  Date :          28/01/2026
//
////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class FileX
{
    public void Checksum(String name)
    {
        try
        {
            FileInputStream fin = new FileInputStream(name);
            int checksum = 0;
            int data = 0;

            while((data = fin.read()) != -1)
            {
                checksum = checksum + data;
            }

            fin.close();
            System.out.println("Checksum is: " + checksum);
        }
        catch(Exception e)
        {
            System.out.println("Unable to calculate checksum");
        }
    }
}

class four
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name:");
        String name = sobj.nextLine();

        FileX obj = new FileX();
        obj.Checksum(name);
    }
}
