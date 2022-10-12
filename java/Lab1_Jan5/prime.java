import java.util.Scanner;
public class prime 
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        int n, i, j, prime;
        System.out.print("\nEnter a number : ");
        n = get.nextInt();

        System.out.print("Prime numbers upto " + n + " :-\n  ");
        for (i=1; i<=n; i++)
        {
            prime = 1;
            for (j=2; j<i; j++)
            {
                if (i%j == 0)
                {
                    prime = 0;    
                    break;
                }
            }
            if (prime == 1)
                System.out.print("  " + i);
        }
    }
}
