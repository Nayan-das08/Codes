// Write a program in Java to use final variables, final methods and final classes

final class FinalClass
{
    int x, y;
    FinalClass(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
    void show()
    {
        System.out.println("\nFrom a final class 'FinalClass'");
        System.out.println("    f.x : " + x);
        System.out.println("    f.y : " + y);
    }
}

class FinalMethod
{
    final static void func()
    {
        System.out.println("\nFrom class 'FinalMethod', a static final method");
        System.out.println("    func()");
    }
}

public class FinalFinal extends FinalMethod
{
    final int x;
    FinalFinal(int x)
    {
        this.x = x;
    }

    public static void main(String[] args)
    {
        FinalClass f = new FinalClass(10,20);
        f.show();

        func();

        FinalFinal ff = new FinalFinal(100);
        System.out.println("\nFrom class 'FinalFinal', a final int variable");
        System.out.println("    ff.x = " + ff.x);
    }
}
