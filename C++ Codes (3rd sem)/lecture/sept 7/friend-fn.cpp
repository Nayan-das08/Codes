// friend func

using namespace std;
# include <iostream>

class A;
class B;

class B
{
  int a, b;

  public:
    B() 
    {
      a = 10;
      b = 20;
    }
    friend void func(A,B);
};

class A
{
  int x, y;

  public:
    A()
    {
      x = 100;
      y = 200;
    }
    friend void func(A,B);
    
};

void func(A a1,B b1)
{
  cout << a1.x << " and " << b1.a;
}

int main()
{
  A p;
  B q;
  func(p,q);
}

