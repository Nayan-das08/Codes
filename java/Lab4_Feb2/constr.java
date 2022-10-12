// WAP to illustrate default and parameterised constructor concept.

public class constr
{
    int x, y;
    constr()    // default constructor initializes data members with 0
    {
        x = 0;
        y = 0;
    }
    constr(int a, int b)
    {
        x = a;
        y = b;
    }
    void view()
    {
        System.out.print("The values are :- \n\tx = " + x + "\n\ty = " + y);
    }
    public static void main(String[] args)
    {
        constr C1, C2;
        C1 = new constr();
        C2 = new constr(10,3);
        System.out.println("For object C1, initialized with default constructor");
        C1.view();
        System.out.println("\n\nFor object C2, initialized with parameterized constructor");
        C2.view();
    }
}