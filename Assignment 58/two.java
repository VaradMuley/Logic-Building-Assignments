////////////////////////////////////////////////////////////
//
//  File name :     one.java
//  Description :   Writes names of all files into
//                  Marvellous.txt
//  Author :        Pallavi Sable
//  Date :          28/01/2026
//
////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class DirectoryX
{
    public void WriteNames(String path)
    {
        try
        {
            File fobj = new File(path);
            FileOutputStream fout = new FileOutputStream("Marvellous.txt");

            if(fobj.exists() && fobj.isDirectory())
            {
                File files[] = fobj.listFiles();

                for(File file : files)
                {
                    if(file.isFile())
                    {
                        String name = file.getName() + "\n";
                        fout.write(name.getBytes());
                    }
                }
            }
            fout.close();
        }
        catch(Exception e)
        {
            System.out.println("Error occurred");
        }
    }
}

class two
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory Name:");
        String name = sobj.nextLine();

        DirectoryX obj = new DirectoryX();
        obj.WriteNames(name);
    }
}
