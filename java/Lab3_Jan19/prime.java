//display prime numbers till given number

import java.util.Scanner;

public class prime 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        int n, prime=1;
        System.out.print("Enter the limit : ");
        n = get.nextInt();

        System.out.print("The prime numbers till " + n + " : ");
        
        for (int i=2; i<=n; i++)     // i = numbers from 2 to n
        {
            for (int j=2; j<i; j++)  // checking if i is prime
            {
                prime = 1;
                if (i%j == 0)   // not divisible -> prime
                {
                    prime = 0;
                    break;
                }
            }
            if (prime == 1)
                System.out.print(i + "  ");
        }
        
        
        get.close();
    }    
}
