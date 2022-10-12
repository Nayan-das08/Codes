// class employee

using namespace std;
# include <iostream>
# include <stdio.h>
# include <string.h>

class employee
  {
    private:
      int emp_no;
      char name[30], desg[30];
      long salary;
      char doc_verified[40];

    public:
      employee()
        {
          strcpy(doc_verified, "complete and genuine");
        }
      void input_data()
        {
          cout << "\n\tEnter employee no : ";
          cin >> emp_no;
          cout << "\tenter name : ";
          cin >> name;
          cout << "\tenter salary : ";
          cin >> salary;
        }
      void display_data()
        {
          cout << "\n\temployee number : " << emp_no
               << "\n\tname : " << name
               << "\n\tsalary : " << salary
               << "\n\tverification status : " << doc_verified << endl;
        }
      
  };

int main()
  {
    employee emp[10];
    int n, i;

    cout << "Enter the number of employees : ";
    cin >> n;
    
    cout << "\n\nEnter the details of the employees :-\n";
    
    for (i=0; i<n; i++)
      {
        cout << "\nEMPLOYEE " << i+1;
        emp[i].input_data();
      }
    
    cout << "\n\nThe employee details in the database are :-\n";

    for (i=0; i<n; i++)
      {
        cout << "\nEMPLOYEE " << i+1;
        emp[i].display_data();
      }
    
    return 0;
  }