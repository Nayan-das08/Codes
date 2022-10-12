import java.util.Scanner;
public class input 
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        System.out.print("Enter first number   : ");
        int a = get.nextInt();
        System.out.print("Enter second number  : ");
        int b = get.nextInt();

        System.out.println(a + " + " + b + " = " + ((int)a+(int)b));
    }    
}
