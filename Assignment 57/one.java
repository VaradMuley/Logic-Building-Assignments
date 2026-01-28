////////////////////////////////////////////////////////////
//
//  File name :     one.java
//  Description :   Copies data from one file into another
//  Author :        Pallavi Sable
//  Date :          28/01/2026
//
////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class FileX
{
    public void CopyFile(String src, String dest)
    {
        try
        {
            FileInputStream fin = new FileInputStream(src);
            FileOutputStream fout = new FileOutputStream(dest);

            byte buffer[] = new byte[1024];
            int ret = 0;

            while((ret = fin.read(buffer)) != -1)
            {
                fout.write(buffer, 0, ret);
            }

            fin.close();
            fout.close();
        }
        catch(Exception e)
        {
            System.out.println("Unable to copy file");
        }
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT OF APPLICATION
//
////////////////////////////////////////////////////////////
class one
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name:");
        String src = sobj.nextLine();

        System.out.println("Enter destination file name:");
        String dest = sobj.nextLine();

        FileX obj = new FileX();
        obj.CopyFile(src, dest);
    }
}
