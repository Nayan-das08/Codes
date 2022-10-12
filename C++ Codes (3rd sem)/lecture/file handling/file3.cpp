// binary files

using namespace std;
# include <fstream>
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
};

int main()
{
	A a(10,20), b;
	cout << "Entered values :- ";
	a.show();

	ofstream ofile("mango.dat", ios::binary);
	ofile.write((char *)&a, sizeof(A));
	ofile.close();

	ifstream ifile("mango.dat", ios::binary);
	ifile.read((char *)&b, sizeof(A));
	cout << "\n\nValues read from file";
	b.show();
	ifile.close();

}