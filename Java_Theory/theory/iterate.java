import java.util.*;
public class iterate 
{
    public static void main(String[] args)
    {
        ArrayList <Integer>x = new ArrayList<Integer>();
        for (int i=0; i<10; i++)
        {
            x.add(i);
        }

        System.out.println(x);
        Iterator <Integer>it = x.iterator();


        System.out.println(it.next());  // returns the vals, starts from x[0]
        System.out.println(it.next());
        
        System.out.println();
        /*while (it.hasNext())
            System.out.println(it.next());
        */
        it.remove();
        System.out.println(x);
        System.out.println(it.next());
        it.remove();
        System.out.println(x);

        // TO REMOVE FROM ITERATOR, WE NEED TO RETRIEVE (using it.next())
        System.out.println(it.hasNext());
        
    }
}
