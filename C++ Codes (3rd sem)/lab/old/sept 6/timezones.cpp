// Take time of two zones: current time of New Delhi current time of London. 
// Calculate the time difference between the two cities. 
// Use the concept of passing objects as parameters

using namespace std;
# include <iostream>
# include <string.h>

class city
  {
    int hh, mm;
    char name[30];

    public:
      /*city(char name[])
        {
          strcpy(city_name, name);
        }*/
      void input()
        {
          cout << "Enter the city name : ";
          cin >> name;
          cout << "\nEnter current time of " << name << "in 24-hr format";
          cout << "\n  HH : ";
          cin >> hh;
          cout << "  MM : ";
          cin >> mm;
        }
      void output()
        {
          if (mm >= 10)
            cout << "\nThe time in " << name << " = " << hh << ":" << mm;
          else
            cout << "\nThe time in " << name << " = " << hh << ":0" << mm;
        }
      int hour()
        {return hh;}
      int min()
        {return mm;}
  };

class timezone
  {
    int diff_hh, diff_mm;
    city c1, c2;  //c2 > c1

    public:
      timezone()
        {
          city temp;
          c1.input();
          c2.input();
          if (c1.hour() > c2.hour())
            {
              temp = c1;
              c1 = c2;    // gets smaller time
              c2 = temp;  // gets greater time 
            }
          else if (c1.min() > c2.min())
            {
              temp = c1;
              c1 = c2;    // gets smaller time
              c2 = temp;  // gets greater time 
            }
          c1.output();
          c2.output();
        }
      void diff()
        {
          diff_hh = c2.hour()-c1.hour();
          diff_mm = c2.min()-c1.min();
          if (diff_mm < 0)
            {
              diff_hh--;
              diff_mm *= -1;
              diff_mm = 60-diff_mm;
            }
        }
      void showtimediff()
        {
          if (diff_mm >= 10)
            cout << "\nThe time difference : " << diff_hh << ":" << diff_mm;
          else
            cout << "\nThe time in " << diff_hh << ":0" << diff_mm;
        }
  };

int main()
  {
    timezone x;

    x.diff();
    return 0;
  }