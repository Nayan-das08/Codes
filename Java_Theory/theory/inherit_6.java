// lambda expression

// this does not work as "class A is not a functional interface"
// functional Interface -> interface having a single abstract method

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

abstract class A extends io
{
    abstract int add(int x, int y);
}

public class inherit_6 extends A
{
    public static void main(String[] args)
    {
        A a = (int x, int y) -> {return x+y;};
        println(a.add(10,2));
    }    
}
