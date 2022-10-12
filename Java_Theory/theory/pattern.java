class io
{
    static <T> void print(T x)
    {
        System.out.print(x);
    }
    static <T> void println(T x)
    {
        System.out.println(x);
    }
}


public class pattern extends io
{
    public static void main(String[] args)
    {
        print("\n");
        Integer m = Integer.parseInt(args[0]);
        int i, j, n, last=0;
        for (n=1; n<=m; n++)
        {
            for (i=1; i<=n; i++)
            {
                for (j=1; j<=(n-i); j++)
                    print(" ");
                
                for (j=1; j<=(2*i-1); j++)
                    {
                        print("O");
                        last = j;
                    }
                print("\n");
            }
            for (i=1; i<=(n/3); i++)
            {
                for (j=1; j<=((last-3)/2); j++)
                print(" ");
                for (j=1; j<=3; j++)
                print("+");
                print("\n");
            }
            
            print("\n");
        }
    }
}
