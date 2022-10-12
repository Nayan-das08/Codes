class CreateThreads extends Thread
{
    @Override
    public void run()
    {
        for (int i=1; i<=5; i++)
        {
            System.out.println(i + " " + currentThread().getName());
            try 
            {
                Thread.sleep(500);
            } 
            catch (Exception e) {}
        }
        // System.out.println();
    }
}

public class multithread
{
    public static void main(String[] args)
    {
        for (int i=0; i<3; i++)
        {
            CreateThreads a = new CreateThreads();
            a.start();
        }
    }
}