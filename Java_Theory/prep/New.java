import java.io.*;

public class New 
{
    public static void main(String[] args)
    {
        try
        {
            FileInputStream f1 = new FileInputStream("output.txt");
            
            byte b[] = new byte[20];
            f1.read(b);
            String s = new String(b);
            System.out.println(s);            
            f1.close();
        }
        catch(IOException e){}

    }
}
