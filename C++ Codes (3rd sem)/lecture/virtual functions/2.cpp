// virtual functions

using namespace std;
# include <iostream>

class base
{
  public:
    virtual void func()
    {
      cout << "\n    invoked from base";
    }
};

class derived_1 : public base
{
  public:
    void func()
    {
      cout << "\n    invoked from derived_1";
    }
};

class derived_2 : public base
{
  public:
    void func()
    {
      cout << "\n    invoked from derived_2";
    }
};

int main()
{
  base *bptr, b;
  derived_1 d1;
  derived_2 d2;

  cout << "b.show";
  b.func();
  cout << "\n\nd1.func()";
  d1.func();
  cout << "\n\nd2.func()";
  d2.func();

  cout << "\n\nbptr = &d1";
  cout << "\nbptr->func()";
  bptr = &d1;
  bptr->func();

  cout << "\n\nbptr = &d2";
  cout << "\nbptr->func()";
  bptr = &d2;
  bptr->func();

  
  return 0;
}