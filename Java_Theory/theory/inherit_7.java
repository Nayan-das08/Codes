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

interface calc
{
    int func(int x, int y);
    //int sub(int x, int y);
}

public class inherit_7 extends io
{
    public static void main(String[] args)
    {
        calc a = (int x, int y) -> {return x+y;};
        calc s = (int x, int y) -> {return x-y;};

        int x = a.func(5,8);
        println(x);
        int y = s.func(5,8);
        println(y);

        /*int z = a.sub(5,8);
        println(z);
        int w = s.sub(5,8);
        println(w);*/

    }
    
}
