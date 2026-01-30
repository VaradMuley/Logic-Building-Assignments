import java.util.*;
import java.io.*;

class program59_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String DirName = null;

        System.out.println("Enter directory name: ");
        DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if((!fobj.exists()) && (!fobj.isDirectory()))
        {
            System.out.println("Error: directory path or directory does not exist");
        }
        else
        {
            File fArr[] = fobj.listFiles();

            if(fArr != null && fArr.length > 0)
            {
                for(int i = 0; i < fArr.length; i++)
                {
                    if(fArr[i].isFile())
                    {
                        System.out.println(fArr[i].getName());
                    }
                }
            }
            else
            {
                System.out.println("Directory is empty");
            }
        }

        sobj.close();
    }
}