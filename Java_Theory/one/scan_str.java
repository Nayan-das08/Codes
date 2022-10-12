// Scanner object initialized with a string

import java.util.Scanner;
public class scan_str 
{
    public static void main(String[] args)
    {
        String str = "first second third 4 fifth 6 seventh 8.018 ninth tenth";
        Scanner get = new Scanner(str);      
        
        System.out.println("String str : " + str + '\n');
        System.out.println("get.next()      : " + get.next());
        System.out.println("get.next()      : " + get.next());
        System.out.println("get.next()      : " + get.next());
        System.out.println("get.nextInt()   : " + get.nextInt());
        System.out.println("get.next()      : " + get.next());
        System.out.println("get.next()      : " + get.next());
        System.out.println("get.nextLine()  : " + get.next());
        System.out.println("get.nextFLoat() : " + get.nextFloat());
        System.out.println("get.nextLine()  : " + get.nextLine());
        
        

        get.close();
    }
}