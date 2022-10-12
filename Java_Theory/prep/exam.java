import java.io.*;

public class exam 
{
    public static void main(String[] args)
    {
        try
        {
            FileInputStream f1 = new FileInputStream("input.txt");
            FileOutputStream f2 = new FileOutputStream("output.txt");
            byte b[] = new byte[20];
            f1.read(b);
            f2.write(b);
            f1.close();
            f2.close();
        }
        catch(IOException e){}

    }
}
