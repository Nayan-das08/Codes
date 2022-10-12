interface hello
{
    void show(String x);
}

public class exam
{
    public static void main(String[] args)
    {
        hello h = (String x) -> {System.out.println("Hello " + x);};
        h.show("Nayan");
        
        h = (String x) -> {System.out.println("Bye " + x);};
        h.show("Nayan"); 
    }
}