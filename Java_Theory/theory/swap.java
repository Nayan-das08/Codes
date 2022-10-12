import java.util.Scanner;
public class swap 
{
    static Scanner get = new Scanner(System.in);
    int number;

    swap() {number = 0;}
    swap(int n) {number = n;}
    static void change(swap i)
    {
        i.number++;
    }
    public static void main(String[] args)
    {
        swap a = new swap();
        change(a);
        System.out.println("new number is = " + a.number);

        swap b = new swap(10);
        change(b);
        System.out.println("new number is = " + b.number);


    }    
}
