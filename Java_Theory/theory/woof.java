import java.util.Scanner;

public class woof 
{
    public static void main(String[] args)
    {
        Dog d1 = new Dog("Tommy", 7);
        Dog d2 = new Dog("Tofee", 2);
        d1.bark();
        d2.bark(4);
        
        d1.setCol("Brown");
        d2.setCol("Black");

        System.out.println();
        System.out.println("d1 is named " + d1.getName());
        System.out.println("d2 is " + d2.getAge() + " years old");
        System.out.println("d2 has " + d2.getCol() + " coat");

        System.out.println("d1's age before changing = " + d1.age);
        d1.age++;
        System.out.println("d1's age before changing = " + d1.age);

        //d2.col = "red";
        // it gives an error: "The field Dog.col is not visible"
    }    
}

class Dog
{
    static Scanner get = new Scanner(System.in);
    String name;
    int age;
    private String col;

    Dog()
    {
        System.out.print("Enter name : ");
        this.name = get.nextLine();
        System.out.print("Enter age  : ");
        this.age = get.nextInt();
    }
    Dog(String a, int b)
    {
        this.name = a;
        this.age = b;
    }
    //------------------------------------------------

    public String getName()
    {
        return this.name;
    }
    public int getAge()
    {
        return this.age;
    }
    public String getCol()
    {
        return this.col;
    }
    public void setCol(String c)
    {
        this.col = c;
    }
    public void bark()
    {
        System.out.println(this.name + " says woof");
        System.out.println();
    }
    public void bark(int n)
    {
        System.out.print(this.name + " says woof");
        for (int i=0; i<n; i++)
            System.out.print(" woof");
        System.out.println();
    }

}
