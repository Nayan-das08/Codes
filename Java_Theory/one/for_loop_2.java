public class for_loop_2 
{
    public static void main(String[] args)
    {
        int x[] = {0,1,2,3,4,5};
        String y = "It is a beautiful day today.";
        char z[] = y.toCharArray();
        String w[] = {"Today", "is", "Sunday"};
        
        for (int i : x)
            System.out.println(i);

        for (char i : z)
            System.out.print(i);
        
        System.out.println();
        for (String i : w)
            System.out.print(i + " ");
        
    }    
}
