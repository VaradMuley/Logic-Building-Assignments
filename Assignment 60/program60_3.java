import java.io.File;
import java.util.Scanner;

class program60_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        File smallestFile = null;
        long minSize = Long.MAX_VALUE;

        if(fobj.exists() && fobj.isDirectory())
        {
            File arr[] = fobj.listFiles();

            for(File file : arr)
            {
                if(file.isFile() && file.length() < minSize)
                {
                    minSize = file.length();
                    smallestFile = file;
                }
            }

            if(smallestFile != null)
            {
                System.out.println("Smallest file: " + smallestFile.getName());
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }

        sobj.close();
    }
}
