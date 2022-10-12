import java.util.Scanner;
public class pyramid 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        int i, j, n;
        System.out.print("Enter number of rows (<10): ");
        n = get.nextInt();
        System.out.println();
        for (i=1; i<=n; i++)
        {
            for (j=1; j<=(n-i); j++)
                System.out.print(" ");
            for (j=1; j<=(2*i-1); j++)
                System.out.print(i);
            System.out.println();
        }
    }    
}
