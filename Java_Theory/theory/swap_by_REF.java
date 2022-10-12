import java.util.ArrayList;
import java.util.Iterator;

public class swap_by_REF 
{
    static void show(int x[])
    {
        int a = x[0], b = x[1];
        System.out.println("a : " + a + ", b : " + b);
    }
    static void show(int a, int b)
    {
        System.out.println("a : " + a + ", b : " + b);
    }
    static void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
        show(a,b);
    }
    public static void main(String[] args)
    {
        int a = 10, b = 20;
        int x[] = {a,b};

        show(x);
        swap(a,b);        
        show(x);
    }    
}
