// virtual functions

using namespace std;
# include <iostream>


class base
{
  public:
    void show()
    {
      cout << "\t    show() invoked from base class";
    }
    virtual void func()
    {
      cout << "\t    func() invoked from base class";
    }
};

class derived : public base
{
  public:
    void show()
    {
      cout << "\t    show() invoked from derived class";
    }
    void func()
    {
      cout << "\t    func() invoked from derived class";
    }
};

int main()
{
  base b1, *b2;
  derived d;
  
  b2 = &d;
  
  cout << "derived d;\n";
  cout << "base b1, *b2=&d;\n\n";

  // non-virtual function
  
  cout << "b1.show()";
  b1.show();    
  cout << "\nb2->show()";
  b2->show(); 
  
  // virtual function
  cout << "\n\nb1.func()";
  b1.func();    
  cout << "\nb2->func()";
  b2->func();

  cout << "\n\nshow() was a non-virtual function";
  cout << "\nfunc() was a virtual function";

  return 0;
}