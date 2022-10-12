// ninary operator overloading

using namespace std;
# include <iostream>

class A
{
	int x, y;

public:
	A() : x(0), y(0) {};
	A(int a, int b) : x(a), y(b) {};
	void show()
	{
		cout << "\n  x = " << x;
		cout << "\n  y = " << y;
	}
	A operator +(A b)
	{
		A temp;
		temp.x = x + b.x;
		temp.y = y + b.y;
		return temp;
	}
	A operator -(A b)
	{
		A temp;
		temp.x = x - b.x;
		temp.y = y - b.y;
		return temp;
	}
};

int main()
{
	A a(5,-7), b(4, 14), c;

	cout << "a";
	a.show();
	cout << "\n\nb";
	b.show();

	cout << "\n\nc = a + b";
	c = a + b;
	// c = a.operator+(b)
	c.show();

	cout << "\n\nc = a - b";
	c = a - b;
	c.show();
}