import java.util.Scanner;

public class exam 
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        int a[] = new int[10];
        for (int i=0; i<a.length; i++)
            a[i] = i;
        
        int n;
        System.out.print("Enter index : ");
        // n = get.nextInt();
        n = 10;
        try 
        {
            System.out.println("a[" + n + "] = " + a[n]);
        } 
        catch (ArrayIndexOutOfBoundsException e) 
        {
            System.out.println("HOUSTON! WE HAVE A PROBLEM!\n");
            e.printStackTrace();
        }


    }    
}
