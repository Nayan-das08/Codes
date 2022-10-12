import java.util.Scanner;
public class test3
{
	static Scanner get = new Scanner(System.in);

	public static void main(String[] args)
	{	
		int a;
		try
		{
			System.out.print("Enter a number : ");
			a = get.nextInt();
			System.out.println("Number enetered = " + a);
		}
		catch(Exception e)
		{
			System.out.println(e);
			System.out.println("Mismatch error");
		}
	}
}