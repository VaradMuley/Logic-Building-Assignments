////////////////////////////////////////////////////////////
//
//  File name :     five.java
//  Description :   Displays file names and sizes
//  Author :        Pallavi Sable
//  Date :          28/01/2026
//
////////////////////////////////////////////////////////////

import java.io.File;
import java.util.Scanner;

class DirectoryX
{
    public void Display(String path)
    {
        File fobj = new File(path);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            for(File file : files)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName() + " : " + file.length() + " bytes");
                }
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}

class five
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name:");
        String name = sobj.nextLine();

        DirectoryX obj = new DirectoryX();
        obj.Display(name);
    }
}
