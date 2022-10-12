// abstract class
// abstract functions


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

abstract class base extends io
{
    abstract void func1();
    abstract void func2();
    void func3() 
    {
        println("base.func3() -> non-abstract");
    }
    // functions w/o defn are abstract fn
    // they need to be declared as abstract
    // a class containing atleast one abstract fn is an abstract class
    // abstract class need to the declared abstract

    // abstract methodss can't be static 
    // static means identifier is same for all the objects/instances
    // but there isn't any implementation (no instances)

    
    // abstract method can't be final as it has to be overriden
}

class child extends base
{
    child()
    {
        println("child()");
    }
    void func1()
    {
        println("child.func1()");
    }
    void func2()
    {
        println("child.func2()");
    }
    
}

public class inherit_4 extends io
{
    public static void main(String[] args)
    {
        child b = new child();
        b.func1();
        b.func2();
        b.func3();
    }
}