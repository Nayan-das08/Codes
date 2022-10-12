// Write a Java program that reads in two 
// floating-point numbers and tests whether 
// they are the same up to three decimal places.

import java.util.Scanner;

public class decimal 
{
    static double change(double x)
    {
        x = x * Math.pow(10,3);
        x = Math.floor(x);
        return x;
    }

    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        double a, b, x, y;

        System.out.print("Enter a  : ");
        a = get.nextFloat();
        x = change(a);
        System.out.print("Enter b  : ");
        b = get.nextFloat();
        y = change(b);

        if (x == y)
            System.out.println("The floating-point numbers are same upto 3 decimal places");
        else
            System.out.println("The floating-point numbers are NOT same upto 3 decimal places");
        
        get.close();

        
    }    
}
