import java.io.File;
import java.util.Scanner;

class program60_e5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter path: ");
        String path = sobj.nextLine();

        File fobj = new File(path);

        if(fobj.exists())
        {
            if(fobj.isFile())
            {
                System.out.println("Path exists and it is a FILE");
            }
            else if(fobj.isDirectory())
            {
                System.out.println("Path exists and it is a DIRECTORY");
            }
        }
        else
        {
            System.out.println("Path does not exist");
        }
    }
}
