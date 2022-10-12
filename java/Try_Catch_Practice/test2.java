import java.util.Scanner ;

public class test2
{
	static Scanner get = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		int a, b;
		int c;
		System.out.print("Enter a : ");
		a = get.nextInt();
		System.out.print("Enter b : ");
		b = get.nextInt();

		try
		{
			c = a/b;
			System.out.println(a + "/" + b + " = " + c);
		}
		catch(Exception e)
		{
			System.out.println(e);
			System.out.println("Divide by Zero Error");
		}

	}

}