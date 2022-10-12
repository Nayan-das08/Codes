// lambda expression

// won't work as "interface A is not a functional interface"
// functional Interface -> interface having a single abstract method

// using lambda expression, only one method in an 
// interface (functional interface) can be overriden, hence
// when interface A is implemented in class B, class B becomes abstract

interface A
{
    int x = 20;
    void func();
    void show(int f);
}

class B //implements A
{
    /*public void func()
    {
        System.out.println("func() from interface A, implemented in class B");
    }
    public void show(int i)
    {
        System.out.println("show(" + i + ") from interface A, implemented in class B");
    }*/
    A a1 = () -> {System.out.println("func()");};
    A a2 = (int y) -> {System.out.println("show(" + y + ")");};
}
public class inherit_8 
{
    public static void main(String[] args)
    {
        B b = new B();
        b.a1.func();
    }    
}
