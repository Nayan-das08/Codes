// post increment operator overloading

using namespace std;
# include <iostream>

class A
{
	int x, y;

public:
	A() : x(0), y(0) {};
	A(int a, int b) : x(a), y(b) {};
	void show ()
	{
		cout << "\n  x = " << x;
		cout << "\n  y = " << y;
	}
	A operator ++(int dummy)	// dummy (=0) integer to indicate postfix operator
	{
		x++;
		y++;
		return *this;
	}
};

int main()
{
	A a(10,20), b;

	cout << "a";
	a.show();

	b = a++;	// return statement reqd for b, a was incremented
	cout << "\n\na";
	a.show();
	cout << "\n\nb";
	b.show();


}