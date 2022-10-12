import java.util.Scanner;

public class temp 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        int len, flag=1, i;
        String str;
        char rev[] = new char[20];

        
        System.out.print("Enter string : ");
        str = get.nextLine();
        len = str.length();

        
        for (i=0; i<len; i++)
        {
            rev[i] = str.charAt(len-i-1);
        }
        
        System.out.print("reversed string = ");

        for (i=0; i<str.length(); i++)
        {

            System.out.print(rev[i]);
        }

        get.close();
    }    
}
