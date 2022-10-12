class Number implements Comparable<Number>
{
    int n;
    Number(int x)
    {
        this.n = x;
    }
    public int compareTo(Number b)
    {
        if (this.n > b.n)
            System.out.println(this.n + " > " + b.n);
        else if (this.n < b.n)
            System.out.println(this.n + " < " + b.n);
        else
            System.out.println(this.n + " = " + b.n);
        return 0;
    }
}

public class exam 
{
    public static void main(String[] args)
    {
        Number a = new Number(Integer.parseInt(args[0]));
        Number b = new Number(Integer.parseInt(args[1]));
        a.compareTo(b);
    }    
}
