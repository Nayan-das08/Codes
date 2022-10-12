import java.util.Scanner;

public class hello
{
	public static void main(String[] args)
	{
		Scanner get = new Scanner(System.in);
		int i, j, n;

		System.out.print("Enter # of lines : ");
		n = get.nextInt();
		
		for (i=1; i<=n; i++)
		{
			for (j=1; j<=n+1-i; j++)
				System.out.print(" ");
			for (j=1; j<=(2*i-1); j++)
				System.out.print("*");
			System.out.println();
		}
		
	}
}