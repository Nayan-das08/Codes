// Write a program to override compareTo function of Comparable Interface

public class compare implements Comparable
{
    public int compareTo(String b)
    {
        return 1;
    }
    public static void main(String[] args)
    {
        //int a = 10, b = 20;
        
        String str1 = "Hello";
        String str2 = "hello";
        
        //System.out.println(str1.compareTo(str2));

        
        
        char a = 'b', A = 'A';
        String x = "" + a;
        String X = "" + A;
        System.out.println(A + " = " + (int)'A');
        System.out.println(a + " = " + (int)'a');
        System.out.println(A + "-" + a + " = " + X.compareTo(x));
    }    
}
