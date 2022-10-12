//number of days between two dates

# include <iostream.h>
# include <conio.h>

struct date
  {
		int dd, mm, yy, no_days;
  };

void check_date(date d)
  {
    
  }
void main()
  {
    clrscr();
    date d1, d2, temp;

    cout << "Enter the dates (date 2 should be greater than date 1)";
    cout << "\nDate 1:-";
    cout << "\n\tday   : ";
    cin >> d1.dd;
    cout << "\tmonth : ";
    cin >> d1.mm;
    cout << "\tyear  : ";
    cin >> d1.yy;

    cout << "\nDate 2:-";
    cout << "\n\tday   : ";
    cin >> d2.dd;
    cout << "\tmonth : ";
    cin >> d2.mm;
    cout << "\tyear  : ";
    cin >> d2.yy;

    check_date(d1);
    getch();
  }




