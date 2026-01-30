import java.io.File;
import java.util.Scanner;

class program59_3
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

            System.out.println("Sub-directories are:");
            for(File file : fArr)
            {
                if(file.isDirectory())
                {
                    System.out.println(file.getName());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}
