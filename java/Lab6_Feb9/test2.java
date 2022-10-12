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

class A extends io
{
    A()
    {
        println("A()");        
    }
    A(int a)
    {
        println("A(int a), a=" + a);
    }
}

class B extends A
{
    B()
    {
        super();
    }
    B(int n)
    {
        super(n);
    }
}
public class test2 
{
    public static void main(String[] args)
    {
        B b = new B();
        B b2 = new B(5);
    }    
}
