import java.io.File;
import java.util.Scanner;

class program60_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        File largestFile = null;
        long maxSize = 0;

        if(fobj.exists() && fobj.isDirectory())
        {
            File arr[] = fobj.listFiles();

            for(File file : arr)
            {
                if(file.isFile() && file.length() > maxSize)
                {
                    maxSize = file.length();
                    largestFile = file;
                }
            }

            if(largestFile != null)
            {
                System.out.println("Largest file: " + largestFile.getName());
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }

        sobj.close();
    }
}
