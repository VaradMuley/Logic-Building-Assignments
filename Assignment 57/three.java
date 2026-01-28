////////////////////////////////////////////////////////////
//
//  File name :     three.java
//  Description :   Creates directory specified by user
//  Author :        Pallavi Sable
//  Date :          28/01/2026
//
////////////////////////////////////////////////////////////

import java.io.File;
import java.util.Scanner;

class DirectoryX
{
    public void CreateDir(String name)
    {
        File fobj = new File(name);

        if(fobj.mkdir())
        {
            System.out.println("Directory created successfully");
        }
        else
        {
            System.out.println("Unable to create directory");
        }
    }
}

class three
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name:");
        String name = sobj.nextLine();

        DirectoryX obj = new DirectoryX();
        obj.CreateDir(name);
    }
}
