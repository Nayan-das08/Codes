class first extends Thread
{
    public void run()
    {
        System.out.println("first: " + currentThread().getName());
    }
}

class second extends Thread
{
    public void run()
    {
        System.out.println("second: " + currentThread().getName());
    }
}

public class three 
{
    public static void main(String[] args)
    {
        first t0 = new first();
        second t1 = new second();
        System.out.println(Thread.currentThread().getName());
        //d.setName("Thread 2");
        t0.start();
        t1.start();
    }    
}
