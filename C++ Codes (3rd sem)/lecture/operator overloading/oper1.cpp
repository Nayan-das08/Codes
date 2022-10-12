//unary  operator overloading

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
	//void operator -();
	A operator -();
	void operator ++();
	void operator --();

};

A A::operator -()
{
	A temp;
	temp.x = -x;
	temp.y = -y;
	return temp;
}

/*void A::operator -()
{
	x = -x;
	y = -y;
}*/

void A::operator --()
{
	x--;
	y--;
}

void A::operator ++()
{
	x++;
	y++;
}

int main()
{
	A a(30,20), c;
	
	cout << "a";
	a.show();
	
	/*// unary minus
	-a;
	cout << "\n\n-a";
	a.show();*/

	// unary minus with assignment operator
	c = -a;
	cout << "\n\nc = -a";
	c.show();

	// unary pre decrement
	--a;
	cout << "\n\n--a";
	a.show();

	// unary pre increment
	++a;
	cout << "\n\n++a";
	a.show();
}