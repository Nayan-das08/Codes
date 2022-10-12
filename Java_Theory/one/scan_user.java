// Scanner object initialized with System.in

import java.util.Scanner;
public class scan_user 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);

        System.out.print("Enter a : ");
        String a = get.nextLine();
        System.out.println("String a : " + a);
        System.out.println("Type of a : " + a.getClass().getName());    
        
        get.close();
    }    
}
