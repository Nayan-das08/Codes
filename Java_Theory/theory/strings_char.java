// converting char[]-String

import java.util.Scanner;
public class strings_char
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        String s1="i'm doing ok", s2;
        char c1[] = {'i', '\'', 'm', ' ', 'd', 'o', 'i', 'n', 'g', ' ', 'o', 'k'};//, c2[]={};
        // c2[] not working when declared here

        // String to char[]
        char c2[] = s1.toCharArray();
        System.out.print("String s1 = " + s1 + '\n');
        System.out.print("char c2[] = ");
        System.out.println(c2);

        // char[] to String
        s2 = new String(c1);
        System.out.print("String s2 = " + s2);
        get.close();
    }
}