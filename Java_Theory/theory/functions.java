import java.util.Scanner;
public class functions 
{   
    static Scanner get = new Scanner(System.in);

    static <T> void print(T x)
    {
        System.out.print(x);
    }
    static <T> void println(T x)
    {
        System.out.println(x);
    }

    static int isEven(int n)
    {
        if (n%2 == 0)
            return 1;      // it is even
        else
            return 0;      // it is NOT even
    }
    public static void main(String[] args)
    {
        int x, e;
        print("Enter number : ");
        x = get.nextInt();
        e = isEven(x);

        if (e == 1)
            println("number is even");
        else 
            println("number is odd");
        
    }    
}
