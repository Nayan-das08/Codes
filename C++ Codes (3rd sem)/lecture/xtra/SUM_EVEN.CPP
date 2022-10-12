//sum of first 10 even numbers

# include <iostream.h>
# include <conio.h>

void main()
  {
    clrscr();
    int sum = 0;

    for (int i=1; i<=10; i++)
      sum = sum + 2*i;
    cout << "sum of first 10 even numbers = " << sum;
    getch();
  }