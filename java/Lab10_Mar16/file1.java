// Write a program to create a file in Java using 
// FileOutputStream class and enter byte data into it.

import java.io.IOException;
import java.io.FileOutputStream;

public class file1 
{
    public static void main(String[] args)
    {
        try
        {
            FileOutputStream f = new FileOutputStream("new.txt");
            for (int i=0; i<26; i++)
                f.write(65+i);
            f.write(10);
            f.write(65+13);
            f.write(65);
            f.write(65+24);
            f.write(65);
            f.write(65+13);
            f.write(10);
            f.close();
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }    
}
