// Program to read and print student's information using two classes and simple inheritance

using namespace std;
# include <iostream>
# include <stdio.h>

int a = 1;    // global var for rno

class person
{
  protected:
    int age;
    char name[30], bloodgrp[4], gender;
};

class student : public person
{
  int rno, marks;
  char grade, course[10];

  public:
    student()
    {
      rno = a++;
    }
    void input();
    void display();
    void calcGrade();

};

void student ::input()
{
  char buffer;
  cout << "    Enter name : ";
  gets(name); 
  cout << "    Enter age  : ";
  cin >> age;
  cout << "    Enter gender  : ";
  cin >> gender;
  cout << "    Enter course  : ";
  scanf("%c", &buffer);
  gets(course);
  cout << "    Enter blood group : ";
  gets(bloodgrp);
  cout << "    Enter overall marks of previous semester/year : ";
  cin >> marks;
  calcGrade();
}

void student ::display()
{
  cout << "\n    Roll No. : " << rno
       << "\n    Name : " << name
       << "\n    Age : " << age
       << "\n    Gender : " << gender
       << "\n    Course : " << course
       << "\n    Blood group : " << bloodgrp
       << "\n    Overall marks of prev. semester/year : " << marks
       << "\n    Grade : " << grade;
}

void student ::calcGrade()    //generic grading system
{
  if (marks >= 91)
    grade = 'A';
  if (marks <= 90 && marks >= 81)
    grade = 'B';
  if (marks <= 80 && marks >= 71)
    grade = 'C';
  if (marks <= 70 && marks >= 61)
    grade = 'D';
  if (marks <= 60 && marks >= 51)
    grade = 'E';
  if (marks <= 50)
    grade = 'F';
}

int main()
{
  student s;
  cout << "Enter the student details :-\n";
  s.input();

  cout << "\nThe student details are :-";
  s.display();
}