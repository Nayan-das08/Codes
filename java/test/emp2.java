import java.util.Scanner;
import java.nio.ByteBuffer;

public class emp2
{
	public static void main(String[] args)
	{
		Scanner get = new Scanner(System.in);
		//details E[];
		int i;

		String name;
		String mail;
		int empno;
		long phno;
		
		System.out.println("Employee info :-");
		for (i=0; i<2; i++)
		{
			System.out.println("Employee " + i);
			System.out.print("Enter name : ");
			name = get.nextLine();
			
			System.out.print("Enter mail id : ");
			mail = get.nextLine();
			
			System.out.print("Enter emp no : ");
			empno = get.nextInt();
			
			System.out.print("Enter phone no : ");
			phno = get.nextInt();

			System.out.println("\n\nEmployee details are:-\n");

			System.out.println("\tname  : " + name);
			System.out.println("\tmail  : " + mail);
			System.out.println("\tempno : " + empno);
			System.out.println("\tphno  : " + phno + "\n\n");
		}

		
		for (i=0; i<2; i++)
		{
			
		}
	}
}
