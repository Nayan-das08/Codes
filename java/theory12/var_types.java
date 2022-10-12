public class var_types 
{
    //short s = 170;
    int i;
    //long l = 4000;
    float f;
    double d;
    char c;
    boolean a, b;

    var_types()
    {
        i = 23;
        f = 24.7845f;
        d = 24.7845;
        c = 'c';
        a = true;
        b = true;
    }
    void values()
    {
        System.out.println("a = " + a);
        System.out.println("b = " + b + '\n');
        System.out.println("i = " + i);
        System.out.println("f = " + f);
        System.out.println("d = " + d);
        System.out.println("c = " + c);
    }

    void division()
    {
        System.out.println();
        System.out.println("f/i   = " + f/i);
        System.out.println("d/i   = " + d/i);
        System.out.println("i/f   = " + i/f);
        System.out.println("i/d   = " + i/d);
        System.out.println("c/i   = " + c/i);
        System.out.println("(int)c = " + (int)c + ", c/i = " + c/i);
    }

    void typecast()
    {
        System.out.println();
        System.out.println("(int)f = " + (int)f);
        System.out.println("(int)d = " + (int)d);
        System.out.println("(float)i = " + (float)i);
        System.out.println("(double)i = " + (double)i);
        System.out.println("(char)i = " + (char)i);
        System.out.println("(char)f = " + (char)f);
        System.out.println("(char)d = " + (char)d);
    }

    public static void main(String[] args)
    {
        var_types var = new var_types();

        var.values();
        var.division();
        var.typecast();
        
    }
}
