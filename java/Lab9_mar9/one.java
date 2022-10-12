import java.util.Scanner ;

public class one
{
	static Scanner get = new Scanner(System.in);
	public static void main(String[] args)
	{
		int a, b, choice;
        float c;
		int A[] = {0,1,2,3,4};

		System.out.print("A[] = ");
		for (int i : A)
			System.out.print(i + "  ");
		
		
		
        do
        {
            try
            {
                System.out.print("\nEnter location at which element is to be shown : ");
                a = get.nextInt();
                System.out.println("Element at location " + a + " = " + A[a]);
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                System.out.println(e);
                System.out.println("Invalid array index for the array int A[]");
            }
            finally
            {
                System.out.print("\nDo you wish to try again? : ");
                choice = get.nextInt();
                System.out.println();
            }
        }
        while (choice != 0);

        System.out.println("------------------------------");

        

        do
        {
            try
            {
                System.out.print("\nEnter a : ");
                a = get.nextInt();
                System.out.print("Enter b : ");
                b = get.nextInt();
        
                c = a/b;
                System.out.println(a + "/" + b + " = " + c);
            }
            catch(ArithmeticException e2)
            {
                System.out.println(e2);
                System.out.println("Invalid arithmetic operation: cannot divide by zero");
            }
            finally
            {
                System.out.print("\nDo you wish to try again? : ");
                choice = get.nextInt();
                System.out.println();
            }
        }
        while(choice != 0);
        //System.out.println(A[6]);

	}

}