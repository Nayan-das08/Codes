// simple inheritance
// constructors
// super()
// function overriding

class io
{
    static <T> void print(T x)
    {
        System.out.print(x);
    }
    static <T> void println(T x)
    {
        System.out.println(x);
    }
}

class vehicle extends io
{
    int wheels;
    int windows;
    
    vehicle()
    {
        println("\tvehicle()");
    }
    vehicle(int a)
    {
        println("\tvehicle(int a), a = " + a);
    }
    void display()
    {
        println("\tvehicle.display()");
    }
    void show()
    {
        println("\tvehicle.show()");
    }
    static void cantOverride()
    {
        println("\tvehicle.cantOverride()");
    }
}

class car extends vehicle
{
    // when default constructor not present in base class
    // compiler provides one
    // this constructor calls def constructor of base/super class

    car()
    {
        // this calls def constr of super class
        // unless we call para constr of super class using super(int)
        // super() needs to be the first statement of child constr
        // super() can only be called from a constructor
        super(10);
        System.out.println("\tcar()");
        
        print("\tsuper.display()\n\t");
        super.display();
        
        print("\tthis.display()\n\t");
        this.display();
        
        print("\tthis.show()\n\t");
        this.show();
    }

    @Override   // for readability
    void display()
    {
        System.out.println("\tcar.display()");
    }

    //@Override
    //void cantOverride() {}
    // can't override a static method
    // can't override a final method
}

class bike
{

}
public class inherit_3 
{
    static <T> void print(T x)
    {
        System.out.print(x);
    }
    static <T> void println(T x)
    {
        System.out.println(x);
    }
    public static void main(String[] args)
    {
        println("\nvehicle v = new vehicle()");
        vehicle v = new vehicle();

        println("\nvehicle v2 = new vehicle(5)");
        vehicle v2 = new vehicle(5);

        println("\ncar v = new car(), class car {}");
        car c = new car();

    }    
}
