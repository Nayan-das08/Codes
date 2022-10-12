// Calculate area of different geometrical figures
// (circle, square, rectangle, triangle) using function overloading.

import java.util.Scanner;
public class Area 
{
    static Scanner get = new Scanner(System.in);
    static float area(float x, String figure)
    {
        if (figure.equalsIgnoreCase("square"))
            return (x*x);
        else if (figure.equalsIgnoreCase("circle"))
            return (float)(Math.PI*x*x);
        else 
            return 0;
    }
    static float area(float x, float y, String figure)
    {
        if (figure.equalsIgnoreCase("rectangle"))
            return (x*y);
        else if (figure.equalsIgnoreCase("triangle"))
            return (float)(0.5*x*y);
        else 
            return 0;
    }

    public static void main(String[] args)
    {
        float a, b;       // dimensions

        System.out.println("Circle :-");
        System.out.print("    Enter radius : ");
        a = get.nextFloat();
        System.out.println("    Area = " + area(a, "circle"));
        
        System.out.println("\nSquare :-");
        System.out.print("    Enter side : ");
        a = get.nextFloat();
        System.out.println("    Area = " + area(a, "square"));
        

        System.out.println("\nTriangle :-");
        System.out.print("    Enter base   : ");
        a = get.nextFloat();
        System.out.print("    Enter height : ");
        b = get.nextFloat();
        System.out.println("    Area = " + area(a, b, "triangle"));
        
        System.out.println("\nRectangle :-");
        System.out.print("    Enter length  : ");
        a = get.nextFloat();
        System.out.print("    Enter breadth : ");
        b = get.nextFloat();
        System.out.println("    Area = " + area(a, b, "rectangle"));
        

    }
}
