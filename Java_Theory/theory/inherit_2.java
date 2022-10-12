// simple inheritance 
// constructors

class A
{
    protected int x, y;

    A() 
    {
        x = y = 0;
        System.out.println("A()");
    }
    A(int a, int b) 
    {
        x = a; y = b;
        System.out.println("A(int " + this.x + ", int " + this.y + ")");
    }
    public void show()
    {
        System.out.println("x = " + this.x + ", y = " + this.y);
    }
}

class B extends A
{
    B()
    {
        x = y = 0;
        System.out.println("B()");
    }
}

public class inherit_2
{
    public static void main(String[] args)
    {
        A a = new A();
        A b = new A(5,6);
        
        B c = new B();
    }
}