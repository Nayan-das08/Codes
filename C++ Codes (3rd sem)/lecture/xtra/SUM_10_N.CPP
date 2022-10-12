//Sum of first 10 natural numbers

# include <iostream.h>
# include <conio.h>

void main()
  {
    clrscr();
    int sum = 0;

    for (int i=1; i<=10; i++)
      sum = sum + i;

    //sum = 1+2+3+4+5+6+7+8+9+10;
    cout << "Sum of first 10 natural numbers : " << sum;
    getch();
  }