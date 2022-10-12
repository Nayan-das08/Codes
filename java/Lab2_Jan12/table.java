import java.util.Scanner;
public class table 
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        System.out.print("Enter a number : ");
        int n = get.nextInt();

        System.out.println("\nMultiplication Table of " + n);
        for (int i=1; i<=10; i++)
            System.out.println("    " + n + "x" + i + " = " + (int)(n*i));
    }    
}
