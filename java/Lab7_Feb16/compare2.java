import java.util.Scanner;

class demo implements Comparable<demo>
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
    @Override
    public int compareTo(demo y)
    {
        
        if (this.num > y.num)
        {
            System.out.println(this.num + " > " + y.num);
            return 1;
        }
        else if (this.num < y.num)
        {
            System.out.println(this.num + " < " + y.num);
            return -1;
        }
        else
        {
            System.out.println(this.num + " = " + y.num);
            return 0;
        }
    }
}

public class compare2 
{
    public static void main(String[] args)
    {
        demo x = new demo();
        demo y = new demo();
        int n = x.compareTo(y);
        System.out.println(n);
        
    }    
}
