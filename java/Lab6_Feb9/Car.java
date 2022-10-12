// Write a java program to implement Interface.

import java.util.Scanner;
interface Vehicle
{
    void showDetails();
    void setDetails(int a, int b);
}

public class Car implements Vehicle
{
    int wheels, windows;

    public void showDetails()
    {
        System.out.println("This Car has " + this.wheels + " wheels and " + this.windows + " windows");
    }
    public void setDetails(int a, int b)
    {
        this.wheels = a;
        this.windows = b;
    }

    public static void main(String[] args)
    {
        Car c = new Car();
        c.setDetails(4, 6);
        c.showDetails();
    }    
}
