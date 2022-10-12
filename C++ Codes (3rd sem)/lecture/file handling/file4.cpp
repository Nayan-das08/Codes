// binary files

using namespace std;
# include <fstream>
# include <iostream>
# include <stdlib.h>

class A
{
	int x, y;

public:
	A() : x(0), y(0) {};
	A(int a, int b) : x(a), y(b) {};
	void input()
	{
		cout << "  enter x : ";
		cin >> x;
		cout << "  enter y : ";
		cin >> y;
	}
	void show()
	{
		cout << "\n  x = " << x;
		cout << "\n  y = " << y;
	}
};

int main()
{
	system("cls");
	int i;
	A a[5], b;
	cout << "sizeof(A) = " << sizeof(A) << "\n\n";
	cout << "Input values :- ";
	for (i=0; i<3; i++)
	{
		cout << "c[" << i << "] :-\n";
		a[i].input();
	}

	cout << "\n\n";
	ofstream ofile("mango.dat", ios::binary);
	for (i=0; i<3; i++)
	{
		ofile.write((char *)&a[i], sizeof(A));
		cout << ofile.tellp()/sizeof(A) << endl;
	}
	ofile.close();


	ifstream ifile("mango.dat", ios::binary);
	for (i=0; i<3; i++)
	{
		ifile.read((char *)&b, sizeof(A));
		cout << "\n\nValues read from file";
		b.show();
		cout << endl << ifile.tellg();
	
	}
	ifile.close();

}