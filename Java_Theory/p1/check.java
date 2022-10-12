package p1;

public class check
{
    public static void checkEven(int x)
    {
        if (x%2 == 0)
            System.out.println(x + " is Even");
        else
            System.out.println(x + " is Odd");
    }
    
    public static void checkPositive(int x)
    {
        if (x > 0)
            System.out.println(x + " is positive");
        else if (x < 0)
            System.out.println(x + " is negative");
        else 
            System.out.println(x + " is zero");
    }
}
