// simple inheritance
// function overriding
// constructors

class A
{
    //private int x, y;

    public A()
    {
        System.out.println("A()");
    }
    public void func1()
    {
        System.out.println("A.func1(), original");
    }
    public void func2()
    {
        System.out.println("A.func2(), original");
    }
}

class B extends A
{
    public B()
    {
        System.out.println("B()");
    }
    public void func1()
    {
        System.out.println("B.func1(), overidden");
    }
    public void func3()
    {
        System.out.println("B.func3(), original");
    }
}

public class inherit_1 
{
    public static void main(String[] args)
    {
        B b = new B();
        b.func1();
        b.func3();
        b.func2();
    }    
}
