import java.util.Scanner;

public class exam 
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        int a, b, c;
        System.out.print("Enter a : ");
        a = get.nextInt();
        System.out.print("Enter b : ");
        b = get.nextInt();
        try 
        {
            c = a/b;
            System.out.println(a + "/" + b + " = " + c);
        } 
        catch (ArithmeticException e) 
        {
            System.out.println("HOUSTON! WE HAVE A PROBLEM!");
            System.out.println(e);
        }


    }    
}
