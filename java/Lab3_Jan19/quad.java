//quadratic equation solver

import java.util.Scanner;

public class quad 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        double a, b, c, d, x1, x2;

        System.out.print("Enter a : ");
        a = get.nextDouble();
        
        System.out.print("Enter b : ");
        b = get.nextDouble();

        System.out.print("Enter c : ");
        c = get.nextDouble();
        
        System.out.print("\nThe equation is :  ");
        System.out.println("(" + a + ")x^2 + (" + b + ")x + (" + c + ")");
        
        d = (b*b) - (4*a*c);
        
        if (d < 0)
            System.out.print("\nNo real roots exit for the quadratic equation");
        else
        {
            d = Math.sqrt(d);
            x1 = (-b + d)/(2*a);
            x2 = (-b - d)/(2*a);
            System.out.printf("\nThe real roots are %.4f and %.4f", x1, x2);
        }
        get.close();    
    }
}
