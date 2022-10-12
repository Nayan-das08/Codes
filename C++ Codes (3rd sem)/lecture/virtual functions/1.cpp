// pointer to base class getting object address from derived classes
// and then using virtual function

using namespace std;
# include <iostream>

class base
{
  public:
    void func()
    {
      cout << "\n    non virtual invoked from base";
    }
    virtual void func2()
    {
      cout << "\n    virtual invoked from base";
    }
};

class derived_1 : public base
{
  public:
    void func()
    {
      cout << "\n    invoked from derived_1";
    }
    void func2()
    {
      cout << "\n    virtual invoked from derived_1";
    }
};

class derived_2 : public base
{
  public:
    void func()
    {
      cout << "\n    invoked from derived_2";
    }
    void func2()
    {
      cout << "\n    virtual invoked from derived_2";
    }
};

int main()
{
  base *bptr, b;
  derived_1 d1;
  derived_2 d2;

  
  cout << "b.func";
  b.func();
  cout << "\n\nd1.func()";
  d1.func();
  cout << "\n\nd2.func()";
  d2.func();

  cout << "\n\nNON VIRTUAL FUNCTIONS";

  cout << "\n\nbptr = &d1";
  cout << "\nbptr->func()";
  bptr = &d1;
  bptr->func();

  cout << "\n\nbptr = &d2";
  cout << "\nbptr->func()";
  bptr = &d2;
  bptr->func();

  cout << "\n\nVIRTUAL FUNCTIONS";

  cout << "\n\nbptr = &d1";
  cout << "\nbptr->func2()";
  bptr = &d1;
  bptr->func2();

  cout << "\n\nbptr = &d2";
  cout << "\nbptr->func2()";
  bptr = &d2;
  bptr->func2();
  
  return 0;
}