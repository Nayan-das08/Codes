//To show the effect of call by value and call by reference

using namespace std;
# include <iostream>
# include <conio.h>

void swap_by_value(int x, int y)
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
		cout << "\nAfter swapping with swap_by_value()"
				 << "\n\ta = " << x
				 << "\n\tb = " << y;
	}

void swap_by_ref(int &x, int &y)
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
		cout << "\n\nAfter swapping with swap_by_value()"
				 << "\n\ta = " << x
				 << "\n\tb = " << y;
	}

int main()
	{
		//clrscr();
		int a, b;
		cout << "Enter the value of a : ";
		cin >> a;
		cout << "Enter the value of b : ";
		cin >> b;
		swap_by_value(a, b);
		cout << "\nBut in the main()"
				 << "\n\ta = " << a
				 << "\n\tb = " << b;
		
    swap_by_ref(a, b);
    cout << "\nBut in the main()"
				 << "\n\ta = " << a
				 << "\n\tb = " << b;
    
    //getch();
		return 0;
	}