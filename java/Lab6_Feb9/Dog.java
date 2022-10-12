// Write a java program to represent Abstract class with example.

import java.util.Scanner;
abstract class Animal
{
    static      Scanner get = new Scanner(System.in);
    protected   int     age;
    protected   String  name;

    public Animal()
    {
        System.out.print("Enter name : ");
        this.name = get.nextLine();
        System.out.print("Enter age  : ");
        this.age = get.nextInt();
    }
    public Animal(String n, int a)
    {
        this.name = n;
        this.age = a;
    }
    abstract public void bark();
    abstract public String retName();
}

public class Dog extends Animal
{
    Dog() {super();}
    Dog(String n, int a) {super(n,a);}
    
    public void bark()
    {
        System.out.println(this.name + " says \"Woof\"");
    }
    public String retName()
    {
        return this.name;
    }

    public static void main(String[] args)
    {
        Dog a = new Dog();
        Dog b = new Dog("Wally", 3);
        a.bark();
        b.bark();
        System.out.println("name of object 1 : " + a.retName());
        System.out.println("name of object 2 : " + b.retName());
    }
}
