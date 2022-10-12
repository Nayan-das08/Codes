import java.util.Scanner;
public class area
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        System.out.print("Enter radius : ");
        double r = get.nextDouble();

        System.out.println("\nArea           = " + Math.PI*r*r);
        System.out.println("Circumference  = " + 2*Math.PI*r);
    }    
}
