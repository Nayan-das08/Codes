import java.util.Scanner;

class CriminalIdentified extends Exception
{
    
}

public class exception_extend 
{
    static Scanner get = new Scanner(System.in);
    public static void main(String[] args)
    {
        String name;

        System.out.print("Enter name : ");
        name = get.nextLine();
        
        try
        {
            if (name.equalsIgnoreCase("nayan") == true)
                throw (new CriminalIdentified());
            System.out.println("Hello " + name);
        }
        catch (CriminalIdentified e)
        {
            System.out.println(e + ": Nayan found");
        }
        finally
        {
            System.out.println("Bye " + name);
        }

        

    }    
}
