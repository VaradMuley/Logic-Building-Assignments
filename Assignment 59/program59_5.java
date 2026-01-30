import java.io.File;
import java.util.Scanner;

class program59_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File fArr[] = fobj.listFiles();

            System.out.println("Files with absolute paths:");
            for(File file : fArr)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName() + " -> " + file.getAbsolutePath());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}
