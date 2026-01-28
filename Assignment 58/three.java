////////////////////////////////////////////////////////////
//
//  File name :     three.java
//  Description :   Writes data of all files into
//                  Marvellous.txt
//  Author :        Pallavi Sable
//  Date :          28/01/2026
//
////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class DirectoryX
{
    public void WriteData(String path)
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
                        FileInputStream fin = new FileInputStream(file);
                        byte buffer[] = new byte[1024];
                        int ret = 0;

                        while((ret = fin.read(buffer)) != -1)
                        {
                            fout.write(buffer, 0, ret);
                        }
                        fin.close();
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

class three
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory Name:");
        String name = sobj.nextLine();

        DirectoryX obj = new DirectoryX();
        obj.WriteData(name);
    }
}
