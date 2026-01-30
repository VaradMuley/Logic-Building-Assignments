import java.util.*;
import java.io.*;

class program59_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String DirName = null;

        System.out.println("Enter directory name: ");
        DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File fArr[] = fobj.listFiles();

            System.out.println("Number of Files in folder are: "+fArr.length);

            for(int i = 0; i < fArr.length; i++)
            {
                System.out.println("File Name : "+fArr[i].getName());
            }
        }
        else
        {
            System.out.println("There is no such Folder");
        }

        sobj.close();
    }
}