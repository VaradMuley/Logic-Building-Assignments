////////////////////////////////////////////////////////////
//
//  File name :     one.java
//  Description :   Displays names of all regular files
//                  from the given directory
//  Author :        Pallavi Sable
//  Date :          28/01/2026
//
////////////////////////////////////////////////////////////

import java.io.File;
import java.util.Scanner;


class DirectoryX
{
    ////////////////////////////////////////////////////////////
    //
    //  Function Name : DisplayFiles
    //  Description   : Displays all regular files
    //  Input         : String
    //  Output        : void
    //
    ////////////////////////////////////////////////////////////
    public void DisplayFiles(String path)
    {
        File fobj = new File(path);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            for(File file : files)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName());
                }
            }
        }
        else
        {
            System.out.println("Invalid Directory");
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

        System.out.println("Enter Directory Name:");
        String name = sobj.nextLine();

        DirectoryX obj = new DirectoryX();
        obj.DisplayFiles(name);
    }
}
