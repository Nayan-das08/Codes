import java.io.*;
import java.util.Scanner;
public class exam 
{
    public static void main(String[] args)
    {
        try
        {
            FileOutputStream f = new FileOutputStream("out.txt");
            String txt = "Entering this text";
            byte b[] = txt.getBytes();
            f.write(b);
            txt = "\nSecond line";
            b = txt.getBytes();
            f.write(b);
            
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }    
}
