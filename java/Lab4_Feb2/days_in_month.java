//Write a Java program to find the number of days in a month.

import java.util.Scanner;
public class days_in_month 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        String month;
        int year, days;
        
        System.out.print("Enter month name: ");
        month = get.nextLine();
        //String m = month.toUpperCase();
        
        if (month.equalsIgnoreCase("January") || 
            month.equalsIgnoreCase("March") || 
            month.equalsIgnoreCase("May") ||
            month.equalsIgnoreCase("July") ||
            month.equalsIgnoreCase("August") ||
            month.equalsIgnoreCase("October") ||
            month.equalsIgnoreCase("December"))
                System.out.print(month + " has 31 days");

        else if (month.equalsIgnoreCase("April") || 
            month.equalsIgnoreCase("June") || 
            month.equalsIgnoreCase("September") ||
            month.equalsIgnoreCase("November"))
                System.out.print(month + " has 30 days");
        
        else if (month.equalsIgnoreCase("February"))
            {
                System.out.print("Enter year : ");
                year = get.nextInt();
                if (year%4 == 0)
                {
                    days = 29;
                    System.out.println("divisible by 4");
                }
                else 
                    days = 28;

                if (year%100 == 0 && year%400 == 0)
                {
                    days = 29;
                    System.out.println("divisible by 100 and 400");
                }
                else
                    days = 28;
                    System.out.print(month + " has " + days + " days");
            }
        get.close();
    }    
}
