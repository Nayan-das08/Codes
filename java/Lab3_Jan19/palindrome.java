//check if input string is palindrome

import java.util.Scanner;

public class palindrome 
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        String str;
        int i, len, flag=1;

        System.out.println("PALINDROME CHECKER\n");
        System.out.print("Enter the string : ");
        str = get.nextLine();
        len = str.length();
        
        for (i=0; i<len/2; i++)
        {
            if (str.charAt(i) != str.charAt(len-1-i))
                flag = 0;
        }
        
        if (flag == 1)
            System.out.print(str + " is a palindrome");
        else if (flag == 0)
            System.out.print(str + " is not a palindrome");
        
        get.close();
    }
    
}
