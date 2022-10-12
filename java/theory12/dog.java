import java.util.Scanner;

public class dog
{
	String name;
	int age;
	char sex;	// M or F
	Scanner get = new Scanner(System.in);
	
	dog()
	{
		System.out.print("Enter name : ");
		name = get.nextLine();
		System.out.print("Enter age : ");
		age = get.nextInt();
		System.out.print("Enter sex : ");
		sex = get.next().charAt(0);
	}

	dog(String a, int b, char c)
	{
		name = a;
		age = b;
		sex = c;
	}

	void display()
	{
		System.out.println("\nName : " + name);
		System.out.println("Age  : " + age);
		System.out.println("Sex  : " + sex);
	}
	public static void main(String[] args)
	{
		dog x = new dog();
		dog y = new dog("Toffee", 12, 'M');
		System.out.println("\n\nThe dog details are :-");
		x.display();
		y.display();
	}
}