class newThread implements Runnable
{
    public void run()
    {
        System.out.println("Initiating new Thread");
        System.out.println("This thread is named : " + Thread.currentThread().getName());
    }
}

public class four 
{
    public static void main(String[] args)
    {
        newThread t = new newThread();
        Thread th = new Thread(t);
        th.start();
    }    
}
