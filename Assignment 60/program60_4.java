import java.io.File;
import java.util.Scanner;

class program60_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirName = sobj.nextLine();

        System.out.print("Enter file extension (e.g. .txt): ");
        String ext = sobj.nextLine();

        File fobj = new File(dirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File arr[] = fobj.listFiles();

            System.out.println("Files with extension " + ext + ":");
            for(File file : arr)
            {
                if(file.isFile() && file.getName().endsWith(ext))
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
