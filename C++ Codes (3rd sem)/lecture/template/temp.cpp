// generic data member using template

using namespace std;
# include <iostream>

template <class T>
class A
{
	T x;

public:
	A(T t) : x(t) {};

	void show()
	{
		cout << "\nx = " << x;
	}
};

int main()
{
	A <int> a(10); 
	A <float> b(45.5);
	A <char> c('d');
	a.show();
	b.show();
	c.show();

	A d(47), e(2.71), f('z');
	d.show();
	e.show();
	f.show();


}