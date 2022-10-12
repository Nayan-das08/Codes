// in q2- make 2 classes: class1 must 
// contain variables, getters, setters, method.. 
// class 2.. PSVM.. create objects of class1 and access variables

import java.util.Scanner;

public class number_new 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        int a;
        number s1, s2, s3;
        s1 = new number();
        s2 = new number();
        s3 = new number();

        
        System.out.print("Enter 1st number : ");
        a = get.nextInt();
        s1.set_values(a);

        System.out.print("Enter 2nd number : ");
        a = get.nextInt();
        s2.set_values(a);

        System.out.print("Enter 3rd number : ");
        a = get.nextInt();
        s3.set_values(a);

        //-----------------------------------

        System.out.println("\nThe Numbers are :-");

        a = s1.get_values();
        System.out.println("1st number : " + a);

        a = s2.get_values();
        System.out.println("2nd number : " + a);

        a = s3.get_values();
        System.out.println("3rd number : " + a);

        get.close();
    }
}

class number
{
    int n;
    
    void set_values(int x)
    {
        n = x;
    }
    int get_values()
    {
        return n;
    }
    
}