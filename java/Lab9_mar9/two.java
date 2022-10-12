import java.util.Scanner;

class ElementNotFound extends Exception
{	
	static int find(int A[], int target)
	{
		//int l = A.length;
		for (int i=0; i<A.length; i++)
		{
			if (target == A[i])
				return i;
		}
		return -1;
	}
}

public class two 
{
	static Scanner get = new Scanner(System.in);

	public static void main(String[] args)
	{
		int a;
		int A[] = {0,1,2,3,4};

		System.out.print("A[] = ");
		for (int i : A)
			System.out.print(i + "  ");
		System.out.print("\nEnter element to be found in A[] : ");
		a = get.nextInt();
		
		try
		{
			int flag = ElementNotFound.find(A, a);
			if (flag == -1)
				throw(new ElementNotFound());
			else
				System.out.println("Element " + a + " is present in A[]");
		}
		catch(ElementNotFound e)
		{
			System.out.println(e + "Error : The element requested is not found in the given array");
		}

	}
}