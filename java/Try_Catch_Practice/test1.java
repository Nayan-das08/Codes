import java.util.Scanner ;

public class test1
{
	static Scanner get = new Scanner(System.in);
	public static void main(String[] args)
	{
		int a, b, c;
		int A[] = {0,1,2,3,4};

		System.out.print("A[] = ");
		for (int i : A)
			System.out.print(i + "  ");
		
		System.out.print("\nEnter location at which element is to be shown : ");
		
		try
		{
			a = get.nextInt();
			System.out.println("Element at location " + a + " = " + A[a]);
		}
		catch(Exception e)
		{
			System.out.println(e);
			System.out.println("Invalid array index for the array int A[]");
		}
		finally
		{
			System.out.println("Thanks");
		}



		//System.out.println(A[6]);

	}

}