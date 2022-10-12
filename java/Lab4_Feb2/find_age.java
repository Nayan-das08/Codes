import java.time.*;
import java.util.Scanner;
public class find_age 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        int dob, age;
        
        System.out.print("Enter year of birth : ");
        dob = get.nextInt();
        
        int year = Year.now().getValue();
        age = year-dob;
        System.out.print("Your age is " + age);
                
        get.close();

    }    
}
