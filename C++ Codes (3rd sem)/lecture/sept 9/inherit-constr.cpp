using namespace std;
#include <iostream>

class A
{
  public:
    A()
    {
      cout << "\n  no-arg constructor of A";
    }
    A(int a)
    {
      cout << "\n  parameterized constructor of A";
      cout << "\n  variable passed = " << a;
    }
};

class B : public A
{
  public:
    B()
    {
      cout << "\n  no-arg constructor of B";
    }
    B(long a)
    {
      cout << "\n  parameterized constructor of B";
      cout << "\n  variable passed = " << a;
    }
    B(int a, int b=200):A(b)
    {
      cout << "\n  parameterized constructor of B";
      cout << "\n  variable passed = " << a;
    }
};

int main()
{
  cout << "\nCONSTRUCTORS AND INHERITANCE\n\n";
  cout << "A p";
  A p;
  cout << "\n\nA q(10)";
  A q(10);

  cout << "\n\nB x";
  B x;

  cout << "\n\nB y(long 20)";
  B y((long)20);
  
  cout << "\n\nB z(int 30)";
  B z(30);
  
  cout << "\n\nB w(int 40, int 100)";
  B w(40,100);


  return 0;
}
