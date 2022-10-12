//import p1.show;

class A
{
    static void check2(int x)
    {
        if (x > 0)
            System.out.println(x + " is positive");
        else if (x < 0)
            System.out.println(x + " is negative");
        else 
            System.out.println(x + " is zero");
    }
}
public class test3 extends A
{
    static void check(int n)
    {
        if (n%2 == 0)
            System.out.println(n + " is even");
        else
            System.out.println(n + " is odd");
    }

    public static void main(String[] args)
    {
        System.out.println("\nhello");
        check(5);
        check(10);
        check2(5);
        check2(-10);
    }    
}
