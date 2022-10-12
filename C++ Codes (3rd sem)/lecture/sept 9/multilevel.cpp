using namespace std;
#include <iostream>

class A
{
  public:
    A()
    {
      cout << "\nno-arg constructor of A";
    }
    A(int a)
    {
      cout << "\nparameterized constructor of A";
      cout << "\n" << a;
    }
};

class B : public A
{
  public:
    B()
    {
      cout << "\nno-arg constructor of B";
    }
    B(int a)
    {
      cout << "\nparameterized constructor of B";
      cout << "\n" << a;
    }
};

class C : public B
{
  public:
    C()
    {
      cout << "\nno-arg constructor of C";
    }
    C(int a)
    {
      cout << "\nparameterized constructor of C";
      cout << "\n" << a;
    }
};

int main()
{
  cout << "A p;";
  A p;
  cout << "\n\nA q(10);";
  A q(10);

  cout << "\n\nB x;";
  B x;
  cout << "\n\nB y(20);";
  B y(20);
  
  cout << "\n\nC i;";
  C i;
  cout << "\n\nC i(30);";
  C j(30);
  
  return 0;
}
