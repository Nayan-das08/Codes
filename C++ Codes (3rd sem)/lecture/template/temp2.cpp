// function template

using namespace std;
# include <iostream>

void show (int x)
{
	cout << "\nx = " << x;
}

template <class T>
void func(T y)
{
	cout << "\ny = " << y;
}

int main()
{
	int a = 10;
	float b = 11.4;
	char c = 'a';

	show(a);
	show(b);
	show(c);

	cout << endl;
	func(a);
	func(b);
	func(c);
	

}