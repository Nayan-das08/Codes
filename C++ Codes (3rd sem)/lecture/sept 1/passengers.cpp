// Write a program that counts the total number of passengers in the queue

using namespace std;
# include <iostream>

class ticket
  {
    char name[30];
    static int count;

    public:
      ticket()
        {
          cout << "\nenter the name of ticket-holder : ";
          cin >> name;
          count++;
        }
      static int ret_count()
        {
          return count;
        }
  };
int ticket ::count = 0;

int main()
  {
    ticket T[7];
    cout << "\n\ntotal number of tickets sold : " << ticket::ret_count();
  }