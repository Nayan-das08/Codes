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

class A extends io
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

public class poly 
{
    public static void main(String[] args)
    {
        A x = new B();
        x.func();

        x = new C();
        x.func();

        // x is a reference variable/object of parent class A
        // but it refers to the object of child classes B and C
        // this is called UPCASTING
        // we can use reference var of class or an interface

        // method invokation is determined by JVM, not by compiler
        // hence it is runtime polymorphism
    }
    
}
