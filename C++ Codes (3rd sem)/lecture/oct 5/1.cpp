/*
Design three classes: Student, Exam and Result. The student class has 
data members such as roll no, name etc. Create a class Exam by inheriting 
the Student class. The Exam class adds data members representing the marks 
scored in six subjects. Derive the Result from class Exam and it has its 
own members such as total marks. Write an interactive program to model this 
relationship. What type of inheritance this model belongs to?
*/

using namespace std;
# include <iostream>
# include <stdio.h>

class student
{
  protected:
    int rno, age;
    char name[30];
  
  public:
    student()       //void getInfo()
    {
      cout << "ENTER STUDENT DETAILS :-\n";
      cout << "  Enter name : ";
      gets(name);
      cout << "  Enter roll no. : ";
      cin >> rno;
      cout << "  Enter age : ";
      cin >> age;
    }
    void showInfo()
    {
      cout << "\n\n\nSTUDENT DETAILS:-";
      cout << "\n  Name      : " << name
           << "\n  Roll no.  : " << rno
           << "\n  Age       : " << age;
    }
};

class exam : public student
{
  protected:
    int a,b,c,d,e,f;

  public:
    exam()        //void getMarks()
    {
      cout << "\nENTER MARKS (out of 100) :-\n";
      cout << "  Enter marks of subject A : ";
      cin >> a;
      cout << "  Enter marks of subject B : ";
      cin >> b;
      cout << "  Enter marks of subject C : ";
      cin >> c;
      cout << "  Enter marks of subject D : ";
      cin >> d;
      cout << "  Enter marks of subject E : ";
      cin >> e;
      cout << "  Enter marks of subject F : ";
      cin >> f;
    }
    void showMarks()
    {
      cout << "\n\nMARKS :-";
      cout << "\n  Marks in A : " << a
           << "\n  Marks in B : " << b
           << "\n  Marks in C : " << c
           << "\n  Marks in D : " << d
           << "\n  Marks in E : " << e
           << "\n  Marks in F : " << f;
    }
};

class result : public exam
{
  int total, perc;
  char grade;

  public:
    result()      //void calcTotal()
    {
      total = a+b+c+d+e+f;    //out of 600
      perc = (total/6);
      calcGrade();
    }
    void calcGrade()
    {
      if (perc >= 90)
        grade = 'A';
      else if (perc < 90 && perc >= 80)
        grade = 'B';
      else if (perc < 80 && perc >= 70)
        grade = 'C';
      else if (perc < 70 && perc >= 60)
        grade = 'D';
      else if (perc < 60 && perc >= 50)
        grade = 'E';
      cout << "grade = " << grade;
    }
    int retTotal()
    { return total;}
    char retGrade()
    { return grade;}
    int retPerc()
    { return perc;}
};

int main()
{
  result r;

  r.showInfo();
  r.showMarks();
  
  cout << "\n\nTotal Marks = " << r.retTotal() << "/600";
  cout << "\nPercentage = " << r.retPerc() << "%";
  cout << "\nGrade = " << r.retGrade();

  

  return 0;
}

