// WAP a program to maintain the student record containing roll number , 
// Name, marks1, marks2, marks3 as data member and getdata(), display() 
// and setdata() as member functions.
 
import java.util.Scanner;
public class Student
{
    static  Scanner get = new Scanner(System.in);
    private int     rno;
    private String  name;
    private int     marks1, marks2, marks3;

    
    public void setdata(int r, String n, int m1, int m2, int m3)
    {
        this.rno = r;
        this.name = n;
        this.marks1 = m1;
        this.marks2 = m2;
        this.marks3 = m3;
    }
    public int getdataRno() {return this.rno;}
    public String getdataName() {return this.name;}
    public int[] getdataMarks() 
    {
        int x[] = {this.marks1, this.marks2, this.marks3};
        
        return x;
    }
    public void display()
    {
        System.out.println("Student details are :-");
        System.out.println("    Roll no : " + this.rno);
        System.out.println("    Name    : " + this.name);
        System.out.println("    Narks in subject 1, 2 and 3 :  " + 
        this.marks1 + ", " + this.marks2 + " and " + this.marks3);
    }        


    public static void main(String[] args)
    {
        System.out.println("STUDENT CLASS IMPLEMENTING GETTERS AND SETTERS");
        
        Student s1 = new Student();
        System.out.println("\ns1.setdata(10, \"Nayan\", 98, 88, 83);");
        s1.setdata(10, "Nayan", 98, 88, 83);
        s1.display();
        
        Student s2 = new Student();
        System.out.println("\ns2.setdata(13, \"Suyra\", 85, 76, 77);");
        s2.setdata(13, "Suyra", 85, 76, 77);
        s2.display();

        System.out.println("\n\n");
        System.out.println("Roll no of first object : " + s1.getdataRno());
        System.out.println("Name of second object : " + s2.getdataName());
        int x[] = s2.getdataMarks();
        System.out.println("Marks of first object:-");
        for (int i=0; i<3; i++)
            System.out.println("    Subject " + i + " : " + x[i]);
        
        
    }

}