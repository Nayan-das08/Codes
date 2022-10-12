import java.io.*;
import java.util.Scanner;
public class exam 
{
    public static void main(String[] args)
    {
        try
        {
            FileInputStream f = new FileInputStream("out.txt");
            byte b[] = new byte[100];
            f.read(b);
            String txt = new String(b);
            System.out.println(txt);
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }    
}
