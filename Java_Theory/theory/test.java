import java.util.Scanner;

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

interface dog
{
    void func(int x);
}
interface cat
{
    void show(int y);
}
public class test extends io
{
    public static void main(String[] args)
    {
        int a=10, b=20;
        dog d = new dog()
        {
            public void func(int x)
            {
                System.out.println("dog " + x);
            }
        };
        d.func(a);
        //---------------------------------------------

        cat c = (int y) -> {println("cat " + y);};
        c.show(b);
    }    
}
