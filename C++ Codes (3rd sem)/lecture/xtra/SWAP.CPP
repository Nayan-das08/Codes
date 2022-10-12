# include <iostream.h>
# include <conio.h>

void swap(int &x, int &y)
  {
    int i;
    i=x;
    x=y;
    y=i;
  }

void main()
  {
    clrscr();
    int a=1, b=5;
    cout << a << " " << b;
    swap(a,b);
    cout << a << " " << b;
    getch();
  }