//package theory12;
import java.util.Scanner;
/*import java.io.File;
import java.io.FileNotFoundException;*/
// import class "Scanner" in the package "util" in the project "java"
// import class "File" in the package "io" in the project "java"

public class scanner_class 
{
    public static void main(String[] args)
    {
        // object of class is created using instantiation
        // instantiation of an object is:-
        //      new class_name(args)
        // class_name() -> constructor
        // args -> values for initialization
        
        Scanner read_key = new Scanner(System.in);
        // scans input from keyboard
        //Scanner read_file = new Scanner(new File("textfile.txt"));
        read_key.close();
    }    
}
