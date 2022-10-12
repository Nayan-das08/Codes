// size of object

using namespace std;
# include <iostream>

class A
{
public:
	int x;
	double y;
	char z;
	/*void func()
	{
		x++;
	}*/
};

class B : public A
{
	int p;
};

int main()
{
	cout << "sizeof(int)	: " << sizeof(int) << endl;
	cout << "sizeof(char)	: " << sizeof(char) << endl;
	cout << "sizeof(double)	: " << sizeof(double) << endl << endl;

	A a;
	cout << "sizeof(a)	: " << sizeof(a) << endl;
	cout << "sizeof(A)	: " << sizeof(A) << endl;
	
	cout << "sizeof(a.x)	: " << sizeof(a.x) << endl;
	cout << "sizeof(a.y)	: " << sizeof(a.y) << endl;
	cout << "sizeof(a.z)	: " << sizeof(a.z) << endl << endl;

	B b;
	cout << "sizeof(b)	: " << sizeof(b) << endl;
	cout << "sizeof(B)	: " << sizeof(B) << endl;
	
	




}