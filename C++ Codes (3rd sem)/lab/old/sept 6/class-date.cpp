// create a class date having day, month, and year. 
// Use the concept of constructor overloading to initilize the values.
// Create objects of the class date

using namespace std;
# include <iostream>
# include <string.h>

class date
  {
    int day, month, year;
    char status[30];

    public:
      /*date() : day=1, month=1, year=2000
      {}
      date(int x, int y, int z)
        {
          day = x;
          month = y;
          year = z;
          check();
        }*/
      date() : day(1), month(1), year(2000)
      {check();}
      date(int x, int y, int z) : day(x), month(y), year(z)
      {check();}
      
      void display()
        {
          cout << "\ndate   : " << day << "/" << month  << "/"<< year;
          cout << "\nstatus : " << status;
        }
      void check()
        {
          if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
              month == 10 || month == 12) && (day <= 31))
            strcpy(status,"VALID DATE");
          else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day <= 30))
            strcpy(status,"VALID DATE");
          else if ((month == 2) && (day <= 28))
            strcpy(status,"VALID DATE");
          else
            strcpy(status,"INVALID DATE");
        }
  };

int main()
  {
    date d1, d2(5,8,2002);
    
    cout << "Date with default constructor :-\n";
    d1.display();

    cout << "\n\nDate with parameterized constructor :-\n";
    d2.display();
    return 0;
  }
