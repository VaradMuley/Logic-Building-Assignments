import java.io.*;
import java.util.Scanner;

class program61_3
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String fname = sobj.nextLine();

        System.out.print("Enter string to append: ");
        String str = sobj.nextLine();

        FileOutputStream foobj = new FileOutputStream(fname, true); // append mode

        byte arr[] = str.getBytes();
        foobj.write(arr);

        foobj.close();

        System.out.println("String appended successfully");
    }
}
