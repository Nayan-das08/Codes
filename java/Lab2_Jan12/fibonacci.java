import java.util.Scanner;
public class fibonacci 
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        System.out.print("\nEnter a number : ");
        int n = get.nextInt();

        int a, b, c;
        a = 0;
        b = 1;
        c = a+b;
        System.out.print(n + " terms of Fibonacci Series :-\n    " + b);
        for (int i=1; i<n; i++)
        {
            System.out.print("  " + c);
            a = b;
            b = c; 
            c = a+b;
        }
    }    
}
