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

class B
{
	int x;

public:
	void func()
	{
		cout << "class B" << endl;
	}
};

class C : public A, public B
{
	int p;
	
public:
	void func()
	{
		A::func();
	}
};

int main()
{
	C c;
	c.A::func();
	c.B::func();
	c.func();
}