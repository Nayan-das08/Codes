// Open a file using FileInputStream, read its content and display on screen

import java.io.IOException;
import java.io.FileInputStream;

public class file3 
{
	public static void main(String[] args)
	{
		String str;

		try
		{
			FileInputStream f = new FileInputStream("new3.txt");
			byte arr[] = new byte[200];
			f.read(arr);
			str = new String(arr);
			System.out.println(str);
			
		}
		catch(Exception e)
		{
			System.out.println("IO Error occured");
			System.out.println(e);
		}	
	}
}
