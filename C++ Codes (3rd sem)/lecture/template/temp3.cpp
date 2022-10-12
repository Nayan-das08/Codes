// max of two integers

using namespace std;
# include <iostream>

template <class T>
T greatest (T x, T y)
{
	return (x>y) ? x : y;
}

int main()
{
	int a, b, c;
	cout << "enter a : ";
	cin >> a;
	cout << "enter b : ";
	cin >> b;

	c = greatest(a,b);

	cout << "\nc = " << c;
}