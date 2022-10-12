// Write a program to show concept of multiple inheritance 
// through implementation of interfaces in a class

import java.util.Scanner;
interface first
{
    int x=10;
    int y=20;
}
interface second
{
    int z=30;
    public void calcSum();
}

public class one implements first, second
{
    int sum;
    one()
    {
        System.out.println("Object for class 'one' declared");
        calcSum();
    }
    @Override
    public void calcSum()
    {
        sum = x + y + z;
    }
    void show()
    {
        System.out.println("\nthis.x = " + x);
        System.out.println("this.y = " + y);
        System.out.println("this.z = " + z);
        System.out.println("sum = " + this.sum);
    }
    public static void main(String[] args)
    {
        one o = new one();
        o.show();
    }
}