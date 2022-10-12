// friend function

using namespace std;
# include <iostream>

class A;
class B;

class B
{
	int p, q;
	public:
		void input()
		{
			cout << "p : ";
			cin >> p;
			cout << "q : ";
			cin >> q;
		}
		friend void sum(A, B);
};

class A
{
	int x, y;
	public:
		void input()
		{
			cout << "x : ";
			cin >> x;
			cout << "y : ";
			cin >> y;
		}
		friend void sum(A, B);
};

void sum(A a, B b)
{
	cout << "sum = " << a.x + a.y + b.p + b.q;
	cout << "\nhello there!";
}

int main()
{
	A h;
	B k;

	h.input();
	k.input();
	sum(h,k);
	return 0;
}

