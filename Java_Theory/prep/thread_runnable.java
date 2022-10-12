import java.util.Scanner;

class MyThread implements Runnable
{
    public void run()
    {
        for (int i=0; i<5; i++)
        {
            System.out.println(i + " " + Thread.currentThread().getName());
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
        MyThread x = new MyThread();
        for (int i=0; i<3; i++)
        {
            Thread th = new Thread(x);
            th.start();
        }
    }    
}
