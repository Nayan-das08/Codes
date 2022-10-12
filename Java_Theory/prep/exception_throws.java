import java.util.Scanner;

class DivisibleByTwo extends Exception{}
class NotDivisibleByTwo extends Exception{}
public class exception_throws
{
    static Scanner get = new Scanner(System.in);
    
    static void check(int x) throws Exception
    {
        if (x%2 == 0)
            throw new DivisibleByTwo();
        else
            throw new NotDivisibleByTwo();
    }
    public static void main(String[] args)
    {
        int n;
        System.out.print("n : ");
        n = get.nextInt();
        try
        {
            check(n);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }

}