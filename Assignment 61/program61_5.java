import java.io.*;
import java.util.Scanner;

class program61_5
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String fname = sobj.nextLine();

        File file = new File(fname);
        long fileSize = file.length();
        long halfSize = fileSize / 2;

        FileInputStream fiobj = new FileInputStream(file);
        FileOutputStream foobj1 = new FileOutputStream("FirstHalf.txt");
        FileOutputStream foobj2 = new FileOutputStream("SecondHalf.txt");

        int data = 0;
        long count = 0;

        while((data = fiobj.read()) != -1)
        {
            if(count < halfSize)
            {
                foobj1.write(data);
            }
            else
            {
                foobj2.write(data);
            }
            count++;
        }

        fiobj.close();
        foobj1.close();
        foobj2.close();

        System.out.println("File split successfully");
    }
}
