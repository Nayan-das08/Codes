// WAP to increment the employee salaries on the basis of their 
// designation(Manager-5000, General Manager-10000, CEO-20000, 
// worker-2000). Use employee name, id, designation , salary as data 
// member and inc_sal as member function.

import java.util.Scanner;
public class Employee {
    static Scanner get = new Scanner(System.in);
    private String  name;
    private int     id;
    private String  desg;
    private int     salary;


    public void setData(String n, int i, String d)
    {  
        this.name = n;
        this.id = i;
        this.desg = d;
        this.salary = setSalary();
    }
    public int setSalary()
    {
        boolean gm  = this.desg.equalsIgnoreCase("General Manager");
        boolean ceo = this.desg.equalsIgnoreCase("CEO");
        boolean w   = this.desg.equalsIgnoreCase("Worker");
        if (gm == true)
            return 12500000;
        else if (ceo == true)
            return 1700000;
        else if (w == true)
            return 50000;
        return 0;
    }
    public void inc_sal()
    {
        boolean gm  = this.desg.equalsIgnoreCase("General Manager");
        boolean ceo = this.desg.equalsIgnoreCase("CEO");
        boolean w   = this.desg.equalsIgnoreCase("Worker");
        if (gm == true)
            this.salary += 20000;
        else if (ceo == true)
            this.salary += 10000;   
        else if (w == true)
            this.salary += 2000;
    }
    public void showData()
    {
        System.out.println("Employee details are :-");
        System.out.println("    Emp id      : " + this.id);
        System.out.println("    Name        : " + this.name);
        System.out.println("    Desgination : " + this.desg);
        System.out.println("    Salary      : " + this.salary);
    }

    public static void main(String[] args)
    {
        System.out.println("EMPLOYEE CLASS");
        
        Employee e = new Employee();
        System.out.println("\ns2.setdata(13, \"Nayan\", 85, 76, 77);");
        e.setData("Nayan", 123, "Ceo");
        e.showData();

        Employee f = new Employee();
        System.out.println("\n\ns2.setdata(13, \"Nayan\", 85, 76, 77);");
        f.setData("Surya", 321, "General Manager");
        f.showData();
        
        e.inc_sal();
        f.inc_sal();

        System.out.println("\n\nAfter increments :-");
        e.showData();
        System.out.println();
        f.showData();
    }
    
}
