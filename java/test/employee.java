import java.util.Scanner;

public class employee
{
	public static void main(String[] args)
	{
		Scanner get = new Scanner(System.in);
		details E[];
		int i;
		System.out.println("Employee info :-");
		for (i=0; i<2; i++)
		{
			System.out.println("Employee " + i+1);
			System.out.print("Enter name : ");
			E[i].name = get.nextLine();
			
			System.out.print("Enter mail id : ");
			E[i].mail = get.nextLine();
			
			System.out.print("Enter emp no : ");
			E[i].empno = get.nextInt();
			
			System.out.print("Enter phone no : ");
			E[i].phno = get.nextInt();

			System.out.println();
		}

		System.out.println("\n\nEmployee details are:-\n");
		for (i=0; i<2; i++)
		{
			System.out.println("Employee " + i+1);
			System.out.println("\tname  : " + E[i].name);
			System.out.println("\tmail  : " + E[i].mail);
			System.out.println("\tempno : " + E[i].empno);
			System.out.println("\tphno  : " + E[i].phno + "\n\n");
		}
	}
}

private class details
{
	String name;
	String mail;
	int empno;
	long phno;
}