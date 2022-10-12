// Program to read and print employee 
// information with department and pf information
// using hierarchical inheritance

using namespace std;
# include <iostream>
# include <stdio.h>
# include <string.h>

class employee
{
  protected:
    int empno, age, joinyr;
    char name[30], gender;

  public:
    void inputEmp()
    {
      cout << "    Enter name : ";
      gets(name);
      cout << "    Enter employee id : ";
      cin >> empno;
      cout << "    Enter age : ";
      cin >> age;
      cout << "    Enter gender : ";
      cin >> gender;
      cout << "    Enter joining year : ";
      cin >> joinyr;
    }
    void displayEmp()
    {
      cout << "\n\nEmployee Details :-"
           << "\n    Emp No.           : " << empno
           << "\n    Name              : " << name
           << "\n    Age               : " << age
           << "\n    Gender            : " << gender
           << "\n    Joining Year      : " << joinyr;
    }
};

class dept : private employee
{
  char dept[20];
  int deptppn;      // population of department
  int assgncomp;    // no. of assignments completed by the department
  int assgnpend;    // no. of assignments pending

  public:
    void inputDept()
    {
      char buffer;
      cout << "    Enter Department name : ";
      scanf("%c", &buffer);
      gets(dept);
      cout << "    Enter no. of people in the department : ";
      cin >> deptppn;
      cout << "    Enter no. of assignments completed : ";
      cin >> assgncomp;
      cout << "    Enter no. of assignments pendning : ";
      cin >> assgnpend;
    }
    void displayDept()
    {
      displayEmp();
      cout << "\n\nDepartment Details :-\n"
           << "\n    Department Name                   : " << dept
           << "\n    No. of members in the department  : " << deptppn
           << "\n    No. of assginments completed      : " << assgncomp
           << "\n    No. of assginments pending        : " << assgnpend;
    }

};

class pf : private employee
{
  int pfid;
  char benificiary[30];
  int rate;

  public:
    void inputPF()
    {
      inputEmp();
      cout << "    Enter PF ID no. : ";
      cin >> pfid;
      strcpy(benificiary, name);
      cout << "    Enter rate of interest of PF : ";
      cin >> rate;
    }
    void displayPF()
    {
      displayEmp();
      cout << "\n\nPF Information :-"
           << "\n    PF ID no          : " << pfid
           << "\n    Benificiary name  : " << benificiary
           << "\n    Rate of interest  : " << rate << "'%' p.a.";
    }
};

int main()
{
  pf P;
  dept D;

  cout << "EMPLOYEE DETAILS\n\n";

  P.inputPF();
  D.inputDept();
  
  P.displayPF();
  D.displayDept();

  return 0;
}