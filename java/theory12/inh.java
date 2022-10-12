class vehicle
{
    int wheels;
    int windows;
    vehicle()
    {
        System.out.println("Default constructor vehicle()");
    }
    vehicle(int a, int b)
    {
        System.out.println("parameterized constructor vehicle()");
        System.out.print(a + ", " + b);
    }
    void display()
    {
        System.out.println("method vehicle.display()");
    }
}
    
class car extends vehicle
{

}

public class inh
{
    public static void main(String[] args)
    {
        vehicle v1 = new vehicle();
        vehicle v2 = new vehicle(4,6);
        
    }
}

