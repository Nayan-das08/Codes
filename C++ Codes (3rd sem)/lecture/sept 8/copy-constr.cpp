// copy constr
using namespace std;
# include <iostream>

class A
{
  int x, y;

  public:
    A()
    {
      cout << "\nno-arg constructor called";
      x = 100;
      y = 200;
    }
    A(int a, int b)
    {
      cout << "\nparameterized constructor called";
      x = a;
      y = b;
      cout << "\nx = " << x;
      cout << "\ny = " << y;
    }
    A(A &P)
    {
      cout << "\ncopy constructor called";
      x = P.x;
      y = P.y;
      cout << "\nx = " << x;
      cout << "\ny = " << y;
    }
};

int main()
{
  A a1;
  A a2(50,10);
  A a3(a2);
  A a4(a1);
}