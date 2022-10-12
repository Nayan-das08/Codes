import java.util.Scanner;

class MyThread extends Thread
{
    
    public void run()
    {
        for (int i=0; i<5; i++)
        {
            System.out.println(i + " " + currentThread().getName());
            try
            {
                Thread.sleep(1000);
            }
            catch(Exception e){}
        }    
    }
}

public class exam 
{
    public static void main(String[] args)
    {
        for (int i=0; i<3; i++)
        {
            MyThread x = new MyThread();
            x.start();
        }
    }    
}
