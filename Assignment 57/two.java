////////////////////////////////////////////////////////////
//
//  File name :     two.java
//  Description :   Checks whether file is regular file
//  Author :        Pallavi Sable
//  Date :          28/01/2026
//
////////////////////////////////////////////////////////////

import java.io.File;
import java.util.Scanner;

class FileX
{
    public void CheckFile(String name)
    {
        File fobj = new File(name);

        if(fobj.exists() && fobj.isFile())
        {
            System.out.println("It is a regular file");
        }
        else
        {
            System.out.println("It is not a regular file");
        }
    }
}

class two
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name:");
        String name = sobj.nextLine();

        FileX obj = new FileX();
        obj.CheckFile(name);
    }
}
