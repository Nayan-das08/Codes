class A
{
    A()
    {
        System.out.println("A()");
    }
    A(int a)
    {
        System.out.println("A(int " + a + ")");
    }
}

class B extends A
{
    B()
    {
        System.out.println("B()");
    }
    B(int a)
    {
        super(a);
        System.out.println("B(int " + a + ")");
    }
}

public class exam
{
    static void line()
    {
        System.out.println("-------------------------");
    }
    public static void main(String[] args)
    {
        // A a = new A();
        B b = new B();
        line();
        B c = new B(10);
    }

}