// class person

using namespace std;
# include <iostream>
# include <stdio.h>
# include <string.h>

class person
  {
    private:
      char name[64];
      int age;
      char address[64];
      float salary;

    public:
      person()
        {
          //strcpy(form_factor, f);
          //form_factor = f;
        }
      void input_data()
        {
          /*cout << "\n\tEnter name : ";
          cin >> name;*/
          cout << "\tenter age : ";
          cin >> age;
          /*cout << "\tenter address : ";
          cin >> address;
          cout << "\tenter salary : ";
          cin >> salary;*/
        }
      void display_data()
        {
          cout << "\n\tage : " << age;
               /*<< "\n\tname : " << name
               << "\n\taddress : " << address
               << "\n\tsalary : " << salary << endl;*/
        }
      int get_age()
        {return age;}
      
  };

inline int young(person p[], int n)
  {
    int a, pos;
    a = p[0].get_age();
    pos = 0;
    for (int i=1; i<n; i++)
      {
        if (p[i].get_age() < a)
          {
            pos = i;
            a = p[i].get_age();
          }
      }
    return a;
  }

inline int old(person p[], int n)
  {
    int a, pos;
    a = p[0].get_age();
    pos = 0;
    for (int i=1; i<n; i++)
      {
        if (p[i].get_age() > a)
          {
            pos = i;
            a = p[i].get_age();
          }
      }
    return a;
  }

int main()
  {
    person p[10];

    int n, i;

    cout << "Enter the number of objects : ";
    cin >> n;
    
    cout << "\n\nEnter the details of people :-\n";
    
    for (i=0; i<n; i++)
      {
        cout << "\nPERSON " << i+1;
        p[i].input_data();
      }
    
    cout << "\n\nThe employee details in the database are :-\n";

    for (i=0; i<n; i++)
      {
        cout << "\nPERSON " << i+1;
        p[i].display_data();
      }
    
    cout << "\n\nThe youngest age : " << young(p,n);
    cout << "\n\nThe oldest age : " << old(p,n);
    
    return 0;
  }