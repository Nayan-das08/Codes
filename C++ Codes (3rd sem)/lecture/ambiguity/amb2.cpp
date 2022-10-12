// ambiguity problem

using namespace std;
# include <iostream>

class A
{
	int x;

public:
	void func()
	{
		cout << "class A" << endl;
	}
};

class B : virtual public A
{
	int y;
};

class C : virtual public A
{
	int z;
};

class D : public B, public C
{
	int w;
};

int main()
{
	D d;
	d.func();

}