// const func

// can call const func
// cannot call non const func

// can be called by const func
// cannot be called by non const func

// constructor cannot be a const func
using namespace std;
# include <iostream>

class A
{
  int x, y=30;

  public:
    A() //const
    {
      x=100;
      y++;
    }
    void func()
    {
      x++;
      cout << x << endl;
    }
    void constfunc() const
    {
      //x++;
      cout << x << endl;
    }
    void constfunc2() const
    {
      constfunc();
      //func();
    }
};

int main()
{
  A a1;
  a1.constfunc();
  a1.func();
}