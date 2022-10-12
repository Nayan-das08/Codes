// Take time of two zones: current time of New Delhi current time of London. 
// Calculate the time difference between the two cities. 
// Use the concept of passing objects as parameters

using namespace std;
# include <iostream>
# include <string.h>

class time_city
  {
    int hh, mm;
    char name[30];
    char status[30];
    int invalid = 0;
    
    public:
      static int diff_h, diff_m;
      void input();
      void output();
      void check_time();
      int hour()
        {return hh;}
      int min()
        {return mm;}
      char *ret_name()
        {return name;}
  };

int time_city::diff_h = 0;
int time_city::diff_m = 0;

void time_city::check_time()
{
  if (hh < 0 || hh > 24 || mm > 60 || mm < 0)
  {
    strcpy(status, "INVALID TIME");
    invalid = 1;
  }
}

void time_city::input()
  {
    cout << "  Enter the city name : ";
    cin >> name;
    cout << "  Enter current time of " << name << " in 24-hr format";
    cout << "\n    HH : ";
    cin >> hh;
    cout << "    MM : ";
    cin >> mm;
    check_time();
  }

void time_city::output()
  {
    if (mm >= 10)
      cout << hh << ":" << mm;
    else
      cout << hh << ":0" << mm;
  }

void diff(time_city c1, time_city c2)
  {
    time_city temp;
    if (c1.hour() > c2.hour())
      {
        temp = c1;
        c1 = c2;    // gets smaller time
        c2 = temp;  // gets greater time 
      }
    else if ((c1.hour() == c2.hour()) && (c1.min() > c2.min()))
      {
        temp = c1;
        c1 = c2;    // gets smaller time
        c2 = temp;  // gets greater time 
      }
          
    c1.diff_h = c2.hour()-c1.hour();
    c1.diff_m = c2.min()-c1.min();
    if (c1.diff_m < 0)
      {
        c1.diff_h--;
        c1.diff_m *= -1;
        c1.diff_m = 60-c1.diff_m;
      }
  }

void add_time(int h1, int m1)
  {
    int h2, m2;
    h2 = h1 + time_city::diff_h;
    m2 = m1 + time_city::diff_m;
    if (m2 >= 10)
      cout << h2 << ":" << m2;
    else
      cout << h2 << ":0" << m2;
    
  }

int main()
  {
    time_city a, b;
    int h, m;
    
    cout << "CITY 1\n";
    a.input();
    cout << "\nCITY 2\n";
    b.input();
    
    cout << "\nCurrent time in " << a.ret_name() << " = ";
    a.output();
    cout << "\nCurrent time in " << b.ret_name() << " = ";
    b.output();
    
    diff(a,b);

    cout << "\n\nThe Difference in time between " << a.ret_name() << " and " << b.ret_name() << " = ";
    cout << time_city::diff_h << "hr " << time_city::diff_m << "min";
    
    cout << "\n\nEnter a new time for " << a.ret_name() << " : ";
    cout << "\n    HH : ";
    cin >> h;
    cout << "    MM : ";
    cin >> m;


    cout << "\nThe time in " << b.ret_name() << " would be = ";
    add_time(h,m);
    return 0;
  }




/*class timezone
  {
    int diff_hh, diff_mm;
    city c1, c2;  //c2 > c1

    public:
      timezone()
        {
          c1.input();
          c2.input();
          city temp;
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
*/



