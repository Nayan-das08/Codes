// Write a program to create a file in Java using 
// FileOutputStream class and enter String data into it.

import java.io.IOException;
import java.io.FileOutputStream;

public class file2
{
	public static void main(String[] args)
	{
		try
		{
			FileOutputStream f = new FileOutputStream("new2.txt");
			String str = "This file is named 'new2.txt'. \n\nThis file is created using FileOutputStream class \nand we have entered String data into it.";
			byte b[] = str.getBytes();
			f.write(b);
			f.close();
		}
		catch(IOException e)
		{
			System.out.println(e);
		}
	}
}