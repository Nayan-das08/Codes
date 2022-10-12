import java.util.Scanner;
public class factorial
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        int n, fact=1, i;
        System.out.print("\nEnter a number : ");
        n = get.nextInt();

        for (i=1; i<=n; i++)
            fact *= i;
        System.out.println(n + "! = " + fact);
    }
}