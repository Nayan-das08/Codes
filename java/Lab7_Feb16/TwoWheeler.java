// Write a program with given interfaces MotorBike and Cycle, 
// then implement in child class TwoWheeler and display distance & speed

interface MotorBike
{
    int speed = 50; // speed maintained
    public void calc();
}

interface Cycle
{
    int time = 2;   // time taken  
    public void show();
}
public class TwoWheeler implements MotorBike, Cycle
{
    int distance;
    TwoWheeler()
    {
        calc(); 
    }
    public void calc()
    {
        distance = speed*time;
    }

    @Override
    public void show()
    {
        System.out.println("speed    = " + speed);
        System.out.println("time     = " + time);
        System.out.println("distance = " + distance);
    }
    public static void main(String[] args)
    {
        TwoWheeler t = new TwoWheeler();
        t.show();
    }
}
