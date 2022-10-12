//Factorial Calc

# include <iostream.h>
# include <conio.h>

void factorial(int n)
  {
		int i;
		long fact = 1;
    for (i=1; i<=n; i++)
      fact *= i;
    cout << "The factoral of " << n << " = " << fact;
  }

void main()
  {
    clrscr();
    int n;
    cout << "Enter a number : ";
    cin >> n;
    factorial(n);
    getch();
  }