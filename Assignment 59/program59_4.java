import java.io.File;
import java.util.Scanner;

class program59_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        int fileCount = 0;
        int folderCount = 0;

        if(fobj.exists() && fobj.isDirectory())
        {
            File fArr[] = fobj.listFiles();

            for(File file : fArr)
            {
                if(file.isFile())
                {
                    fileCount++;
                }
                else if(file.isDirectory())
                {
                    folderCount++;
                }
            }

            System.out.println("Total files   : " + fileCount);
            System.out.println("Total folders : " + folderCount);
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}
