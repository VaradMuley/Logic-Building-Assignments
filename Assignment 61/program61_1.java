import java.io.*;
import java.util.Scanner;

class program61_1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name: ");
        String src = sobj.nextLine();

        System.out.print("Enter destination file name: ");
        String dest = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(src);
        FileOutputStream foobj = new FileOutputStream(dest);

        int byteData = 0;

        while((byteData = fiobj.read()) != -1)
        {
            foobj.write(byteData);
        }

        fiobj.close();
        foobj.close();

        System.out.println("File copied successfully");
    }
}
