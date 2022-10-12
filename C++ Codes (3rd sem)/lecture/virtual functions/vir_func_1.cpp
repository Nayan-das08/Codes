// virtual functions

using namespace std;
# include <iostream>


class base
{
  public:
    void show()
    {
      cout << "\nshow() invoked from base class";
    }
    virtual void func()
    {
      cout << "\nfunc() invoked from base class";
    }
};

class derived : public base
{
  public:
    void show()
    {
      cout << "\nshow() invoked from derived class";
    }
    void func()
    {
      cout << "\nfunc() invoked from derived class";
    }
};

int main()
{
  base b1, *b2;
  derived d;

  b1.show();

  b2 = &d;
  b2->show();
  
  // in both the cases, base::show() is binded to the objects
  // hence, the compiler runs base::show() in both cases
  // the base class has no info about derived class

  // when 'pointer to object' of base class, pointing 
  // to derived class object is used, only members inherited 
  // to derived class from base class can be used.
  // the base pointer cannot be used to acccess the derived class members

  b1.func();
  b2->func();

  // when base class fn is declared virtual, compiler decides
  // which fn to use at runtime depending on the type of object
  // pointed to by the base pointer, instead of the type of pointer
  // ie it is binded with the object at runtime
  return 0;
}