import java.io.*;
import java.util.Scanner;

class program61_4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter first file name: ");
        String file1 = sobj.nextLine();

        System.out.print("Enter second file name: ");
        String file2 = sobj.nextLine();

        System.out.print("Enter output file name: ");
        String outFile = sobj.nextLine();

        FileOutputStream foobj = new FileOutputStream(outFile);

        FileInputStream fiobj1 = new FileInputStream(file1);
        FileInputStream fiobj2 = new FileInputStream(file2);

        int data = 0;

        while((data = fiobj1.read()) != -1)
        {
            foobj.write(data);
        }

        while((data = fiobj2.read()) != -1)
        {
            foobj.write(data);
        }

        fiobj1.close();
        fiobj2.close();
        foobj.close();

        System.out.println("Files merged successfully");
    }
}
