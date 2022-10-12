

public class compare3 implements Comparable
{
    int num;
    compare3(int x)
    {
        this.num = x;
    }
    @Override
    public int compareTo(Object o) {
        // TODO Auto-generated method stub
        return 0;
    }
    public static void main(String[] args)
    {
        compare3 a = new compare3(5);
        compare3 b = new compare3(10);
        System.out.println(a.compareTo(b));
    }    
}
