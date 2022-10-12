import java.util.Scanner;

class demo implements Comparable
{
    int num;
    static Scanner get = new Scanner(System.in);
    demo()
    {   
        System.out.print("Enter integer : ");
        this.num = get.nextInt();
    }
    demo(int a)
    {
        this.num = a;
    }
    //@Override
    public int compareTo(demo y)
    {
        return 500;
    }
}

public class temp 
{
    public static void main(String[] args)
    {
        demo x = new demo();
        demo y = new demo();
        x.compareTo(y);
        
    }    
}
