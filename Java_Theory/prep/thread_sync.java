import java.util.Scanner;

class table
{
    synchronized void show(int n)
    {
        for (int i=1; i<=5; i++)
        {
            System.out.println(n);
            try
            {
                Thread.sleep(1);
            }
            catch(Exception e){}
        }
    }
}

class MyThread1 extends Thread
{
    table t;
    MyThread1(table t)
    {
        this.t = t;
    }
    public void run()
    {
        t.show(5);
    }
}

class MyThread2 extends Thread
{
    table t;
    MyThread2(table t)
    {
        this.t = t;
    }
    public void run()
    {
        t.show(10);
    }
}

public class thread_sync
{
    public static void main(String[] args)
    {
        table t = new table();
        MyThread1 x = new MyThread1(t);
        MyThread2 y = new MyThread2(t);
        x.start();
        y.start();
    }
}