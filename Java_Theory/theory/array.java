public class array 
{
    public static void main(String[] args)
    {
        int[] x = new int[5];
  
        for (int j=0; j<x.length; j++)
            x[j] = 10*j;

        for (int j=0; j<x.length; j++)
            System.out.print(x[j] + "  ");

        int y[] = {9,8,7,6,5,4,3,2,1};
        for (int j=0; j<y.length; j++)
            y[j] = y[j]*100;

        System.out.println();
        for (int j=0; j<y.length; j++)
            System.out.print(y[j] + "  ");

    }    
}
