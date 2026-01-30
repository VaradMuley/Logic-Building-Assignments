import java.io.File;
import java.util.Scanner;

class program60_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);
        long totalSize = 0;

        if(fobj.exists() && fobj.isDirectory())
        {
            File arr[] = fobj.listFiles();

            for(File file : arr)
            {
                if(file.isFile())
                {
                    totalSize += file.length(); // size in bytes
                }
            }

            System.out.println("Total size of files: " + totalSize + " bytes");
        }
        else
        {
            System.out.println("Invalid directory");
        }

        sobj.close();
    }
}
