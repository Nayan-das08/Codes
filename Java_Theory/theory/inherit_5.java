// interface

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

// collection of abstract methods and constants
// method header w/o a method body
// methods are public by default
// not necessary to use abstract keyword in interface
// multiple interfaces can be implemented at the same time
// extending and implementing can take place at the same time
// put 'extends' before 'inplements'
interface hello
{
    void func2();
    void func3();
    int x = 30;
}

class byee extends io implements hello 
{
    void func1()
    {
        println("byee.func1()");
    }
    public void func2()     // need to state public here as nothing=default
    {
        println("byee.func2() -> from interface");
    }
    public void func3()     // need to state public here as nothing=default
    {
        println("byee.func3() -> from interface");
    }
}
// class implementing the interface needs to define 
// each of the methods in the interface


public class inherit_5 extends io
{
    public static void main(String[] args)
    {
        byee b = new byee();
        b.func1();
        b.func2();
        b.func3();
        System.out.println(b.x);
    }    
}
