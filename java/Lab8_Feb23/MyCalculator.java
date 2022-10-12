// You are given an interface AdvancedArithmetic which contains 
// a method signature int divisor_sum(int n). You need to write 
// a class called MyCalculator which implements the interface. 

// divisorSum() just takes an integer as input and return 
// the sum of all its divisors. For example, divisors of 6 are 1, 2, 3 and 6, 
// so divisor_sum should return 12. The value of n will be at most 1000.

import java.util.Scanner;

interface AdvancedArithmetic
{
    int divisor_sum(int n);
}

public class MyCalculator implements AdvancedArithmetic
{
    static Scanner get = new Scanner(System.in);
    public int divisor_sum(int n)
    {
        int sum = 0;
        int a[] = new int[50];
        System.out.println("Divisors of " + n + " are :-");
        for (int i=1; i<=n; i++)
            if (n%i == 0)
            {
                System.out.print("  " + i);
                sum += i;
            }
        return sum;
    }
    public static void main(String[] args)
    {
        MyCalculator m = new MyCalculator();
        System.out.print("Enter a number : ");
        int sum = m.divisor_sum(get.nextInt());
        System.out.println("\nSum of divisors = " + sum);
    }    
}
