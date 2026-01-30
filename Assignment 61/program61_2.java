import java.io.*;
import java.util.Scanner;

class program61_2
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

        byte buffer[] = new byte[1024];
        int bytesRead = 0;

        while((bytesRead = fiobj.read(buffer)) != -1)
        {
            foobj.write(buffer, 0, bytesRead);
        }

        fiobj.close();
        foobj.close();

        System.out.println("File copied using buffer");
    }
}
