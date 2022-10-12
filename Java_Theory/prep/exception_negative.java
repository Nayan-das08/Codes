import java.util.Scanner;
public class exam 
{
    static Scanner get = new Scanner(System.in);

    // static int check(int x)// throws Exception
    // {
    //     if ()
    // }
    public static void main(String[] args)
    {
        int age;
        System.out.print("age : ");
        age = get.nextInt();
        try
        {
            if (age < 0)
                throw new Exception("Negative Age ERROR");
            System.out.println("Acceptable age");
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }

    }    
}
