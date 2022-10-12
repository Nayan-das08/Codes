//To check for leap year

# include <iostream.h>
# include <conio.h>

void main()
  {
    clrscr();
    int year;
    cout << "Enter the year : ";
    cin >> year;

    if (year%100 == 0 && year%400 != 0)   //Cent. year not divisible by 400
      cout << "The year " << year << " is not a leap year";

    else if (year%4 == 0)                 //Year divisible by 4
      cout << "The year " << year << " is a leap year";

    else                                  //Year not divisible by 4
      cout << "The year " << year << " is not a leap year";
    getch();
  }