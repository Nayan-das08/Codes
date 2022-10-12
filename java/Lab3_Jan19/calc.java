//Simple Calc

import java.util.Scanner;

public class calc 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        int a, b, c, choice;
        a=b=c=0;
        //System.out.print("\n");
        do
        {
            System.out.println("\n____CALCULATOR____");
            System.out.println("1. \tAdd");
            System.out.println("2. \tSubtract");
            System.out.println("3. \tMultiply");
            System.out.println("4. \tDivide");
            System.out.println("5. \tRemainder");
            System.out.println("6. \tExit");
            System.out.print("\nEnter your choice : ");
            choice = get.nextInt();

            if (choice < 6)
            {
                System.out.print("\n  a : ");
                a = get.nextInt();
                System.out.print("  b : ");
                b = get.nextInt();
            }
            
            switch (choice)
            {
                case 1:
                    c = a+b;
                    System.out.print("  " + a + " + " + b + " = " + c);
                    break;
                
                case 2:
                    c = a-b;
                    System.out.print("  " + a + " - " + b + " = " + c);
                    break;
                
                case 3:
                    c = a*b;
                    System.out.print("  " + a + " * " + b + " = " + c);
                    break;
                
                case 4:
                    c = a/b;
                    System.out.print("  " + a + " / " + b + " = " + c);
                    break;
                
                case 5:
                    c = a%b;
                    System.out.print("  " + a + " % " + b + " = " + c);
                    break;
                
                case 6:
                    System.out.print("\nThank You for using the calculator");
                    System.exit(0);
                    break;
                
                default:
                    System.out.print("\nInvalid choice!");        
                    
            }//switch
            System.out.println("\n\n----------------------------");
        }//do-while
        while(choice != 0);
        get.close();
    }
}
