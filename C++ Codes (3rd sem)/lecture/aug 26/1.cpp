// class bank

using namespace std;
# include <iostream>
# include <stdio.h>

class bank
  {
    private :

      long acc_no;
      char name[30];
      int opening_balance;

    public :
      bank()
        {
          opening_balance = 10000;
        }
      void input_data()
        {
          cout << "\n\tEnter account no : ";
          cin >> acc_no;
          cout << "\tenter name : ";
          cin >> name;
        }
      void display_data()
        {
          cout << "\n\tAccount number : " << acc_no
               << "\n\tName : " << name
               << "\n\topening balance : " << opening_balance;
        }
      void create_benificiary();
      void view_balance();


  };

int main()
  {
    bank customer[20];
    int n, i;

    cout << "Enter the number of customers : ";
    cin >> n;
    
    cout << "\n\nEnter the details of the accounts :-\n";
    
    for (i=0; i<n; i++)
      {
        cout << "\nCUSTOMER " << i+1;
        customer[i].input_data();
      }
    
    cout << "\n\nThe Accounts in the database are :-\n";

    for (i=0; i<n; i++)
      {
        cout << "\nCUSTOMER " << i+1;
        customer[i].display_data();
      }
    
    return 0;
  }