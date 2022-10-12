class first extends Thread
{
    public void run()
    {
        for (int i=0; i<5; i++)
            System.out.println(currentThread().getName());
    }
}

class second extends Thread
{
    public void run()
    {
        for (int i=0; i<5; i++)
            System.out.println(currentThread().getName());
    }
}

public class three_new 
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
