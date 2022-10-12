// Program to read and print employee information using multiple inheritance

using namespace std;
# include <iostream>
# include <string.h>
# include <stdio.h>

class person
{
  protected:
    int age;
    char name[30], gender;

  public:
    void inputperson()
    {
      char buffer;
      cout << "    Enter name             : ";
      scanf("%c", &buffer);
      gets(name); 
      cout << "    Enter age              : ";
      cin >> age;
      cout << "    Enter gender           : ";
      cin >> gender;
    }
};

class company
{
  protected:
    int branchno;
    char dept[20];

  public:
    void inputco()
    {
      char buffer;
      cout << "    Enter branch number    : ";
      cin >> branchno; 
      cout << "    Enter department name  : ";
      scanf("%c", &buffer);
      gets(dept);
    }
};

class employee : private person, private company
{
  int empno;
  long ctc;

  public:
    void inputemp()
    {
      cout << "    Enter employee number  : ";
      cin >> empno;
      inputperson();
      inputco();
      cout << "    Enter CTC              : ";
      cin >> ctc;      
    }
    void displayemp()
    {
      cout << "\n    Emp No.    : " << empno
           << "\n    Name       : " << name
           << "\n    Age        : " << age
           << "\n    Gender     : " << gender
           << "\n    Branch No. : " << branchno
           << "\n    Department : " << branchno
           << "\n    CTC        : " << ctc;
    }
};

int main()
{
  employee E;
  
  cout << "Enter the employee details :-\n";
  E.inputemp();
  
  cout << "\nThe employee details are :-";
  E.displayemp();

  return 0;
}