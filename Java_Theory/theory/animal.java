import java.util.Scanner;
public class animal
{
    public static void main(String[] args)
    {
        /*System.out.println("Hello");
        Dog x = new Dog();
        x.bark();
        Dog y = new Dog();
        y.bark();
        Dog z = y;
        z.bark();
        System.out.println("These were individual objects");
        System.out.println("--------------------------------------------\n");*/
        
        // declaring array of Dog
        Dog[] pets;

        // allocating memory for 5 objects of class Dog
        pets = new Dog[3];
        
        for (int i=0; i<3; i++)
        {
            // initialize i'th object in the array of objects
            pets[i] = new Dog();
            pets[i].bark();
        }

    }
}

class Dog
{
    Scanner get = new Scanner(System.in);

    String name;
    Dog()
    {
        System.out.print("Enter name : ");
        name = get.nextLine();
        name = name.toUpperCase();
    }
    
    void bark()
    {
        System.out.println(name + " says Woof\n");
    }
}