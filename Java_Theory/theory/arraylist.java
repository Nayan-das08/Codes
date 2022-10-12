import java.util.*;
public class arraylist 
{
    public static void main(String[] args)
    {
        ArrayList <Integer>x = new ArrayList<Integer>();
        for (int i=0; i<10; i++)
        {
            x.add(i);
        }
    
        System.out.println(x);
        System.out.println(x.get(5));
        x.set(3,30);
        System.out.println(x);
        System.out.println(x.size());
        x.remove(5);
        System.out.println(x);
        System.out.println(x.size());

        
        for (Integer i : x)
            System.out.print("  " + i);
    }    
}
