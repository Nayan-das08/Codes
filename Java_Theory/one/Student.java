
import java.util.Scanner;
public class Student
{
    Scanner get = new Scanner(System.in);
    int rno;
    private String name;
    static int count = 0;

    Student()
    {
        System.out.print("Enter name    : ");
        name = get.nextLine();
        System.out.print("Enter roll no : ");
        rno = get.nextInt();
        count++;
    }
    Student(String a, int b)
    {
        name = a;
        rno = b;
        count++;
    }
    void show()
    {
        System.out.println("\nStudent details :-");
        System.out.println("\tName    : " + name);
        System.out.println("\tRoll no : " + rno);
    }

    public static void main(String[] args)
    {
        Student s = new Student();
        Student t = new Student("Tom", 2);

        s.show();
        t.show();
        System.out.println("Total number of students : " + count);
        System.out.println(s.name);
    }
    
}
