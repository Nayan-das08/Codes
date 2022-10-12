// virtual functions

using namespace std;
# include <iostream>
# include <stdio.h>

class person
{
  protected:
    int age;
    char name[30];

  public:
    virtual void get_info()
    {
      cout << "    Enter name : ";
      gets(name);
      cout << "    Enter age  : ";
      cin >> age;
    }
    virtual void show_info()
    {
      cout << "   Name  : " << name << endl
           << "   Age   : " << age << endl;
    }
};

class student : public person
{
  int marks;
  char grade;

  public:
    void get_info()
    {
      cout << "    Enter name  : ";
      cin.ignore();
      gets(name);
      cout << "    Enter age   : ";
      cin >> age;
      cout << "    Enter marks : ";
      cin >> marks;
      cout << "    Enter grade : ";
      cin >> grade;
    }
    void show_info()
    {
      cout << "    Name  : " << name << endl
           << "    Age   : " << age << endl
           << "    Marks : " << marks << endl
           << "    Grade : " << grade << endl;
    }  
};

int main()
{
  person *p = new person;
  student s;

  cout << "Entering details of person\n";
  p->get_info();
  cout << "\nINFO :-\n";
  p->show_info();

  p = &s;
  
  cout << "\n\nEntering details of student\n";
  p->get_info();
  cout << "\nINFO :-\n";
  p->show_info();
  
  return 0;
}