
import java.util.Scanner;

class A
{
    static Scanner get = new Scanner(System.in);
    A()
    {
        System.out.println("A()");
    }
    void func()
    {
        System.out.println("func()");
    }
}

public class scan
{
    public static void main(String[] args)
    {
        A a = new A();
        a.func();
        
        int x, y;
        System.out.print("Enter a number : ");
        x = A.get.nextInt();
        System.out.print("Enter another number : ");
        y = a.get.nextInt();
        System.out.println("x = " + x);
        System.out.println("y = " + y);
    }
}
