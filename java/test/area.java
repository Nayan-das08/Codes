import java.util.Scanner;

public class area
{
	public static void main(String[] args)
	{
		Scanner get = new Scanner(System.in);
		System.out.print("Enter radius : ");
	  int r = get.nextInt();
	  System.out.println("Area : " + Math.PI*r*r);
		System.out.println("Circumference : " + 2*Math.PI*r);
  	
	}
}
