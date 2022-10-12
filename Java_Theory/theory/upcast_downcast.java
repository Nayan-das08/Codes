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

class A  extends io
{
    void func()
    {
        println("A.func()");
    }
}

class B extends A
{
    void func()
    {
        println("B.func()");
    }
}

class C extends A
{
    void func()
    {
        println("C.func()");
    }
}

public class upcast_downcast extends io
{
    public static void main(String[] args)
    {
        A x = new B();
        x.func();

        x = new C();
        x.func();

        println(x.getClass());
        C y = new C();
        C z = (C)x;
        println(y.getClass());
        println(z.getClass());
    }
}