// WAP to illustrate all string & string buffer operation

import java.util.Scanner;
public class string
{
    public static void main(String[] args)
    {
        String a, b, c;
        char x[] = {'e', 'l', 'e', 'p', 'h', 'a', 'n', 't'};
        Scanner get = new Scanner(System.in);
        a = "hello";
        b = "Hello";
        
        System.out.println("String A : " + a);
        System.out.println("String B : " + b);

        System.out.println("String a concatenated to 'b' : " + a.concat(b));
        
        System.out.println("String a with e -> b : " + a.replace('e', 'b'));
        
        c = "    " + a;
        System.out.println("String c : " + c);
        System.out.println("String c trimmed : " + c.trim());

        System.out.println("char x[] as a String :" + String.valueOf(x)); 

        System.out.println("String a in upper case : " + a.toUpperCase());
        
        System.out.println("String b in upper case : " + b.toLowerCase());
        
        //_____________________________________________________________________

        System.out.print("\n\n");
        StringBuffer A, B;
        A = new StringBuffer("Lion");
        B = new StringBuffer("Tiger");

        System.out.println("StringBuffer A : " + A);
        System.out.println("StringBuffer B : " + B);
        
        A.insert(2, 'A');
        B.insert(3, 'Z');
        System.out.println("StringBuffer A after inserting 'A' at 2 : " + A);
        System.out.println("StringBuffer B after inserting 'B' at 3 : " + B);

        B.append("15st");
        System.out.println("StringBuffer B after appending \"15st\" : " + B);
        
        B.delete(2,4);
        System.out.println("StringBuffer B after deleting substring from index 2 to 4 : " + B);
        
        A.append("hello_there");
        System.out.println("StringBuffer A after appending \"hello_there\" : " + A);
        A.replace(5, 12, "bye");
        System.out.println("StringBuffer A after replacing from index 5 to 12 with string \"bye\" : " + A);

        B.reverse();
        System.out.println("StringBuffer B reversed : " + B);
        
        System.out.println("Length of StringBuffer A : " + A.length());

        System.out.println("Capacity of StringBuffer A : " + A.capacity());

        System.out.println("Character at index 5 in StringBuffer A : " + A.charAt(5));
        
        get.close();
    }    
}
