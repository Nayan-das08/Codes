// Program to demonstrate example of multiple inheritance

using namespace std;
# include <iostream>

class A
{
  protected:
    int a, b;

  public:
    A()
    {
      cout << "    enter a : ";
      cin >> a;
      cout << "    enter b : ";
      cin >> b;
    }
};

class B 
{
  protected:
    int c, d;

  public:
    B()
    {
      cout << "    enter c : ";
      cin >> c;
      cout << "    enter d : ";
      cin >> d;
    }
};

class C : private A, private B
{
  //prvate : a, b, c, d inherited privately from A and B
  int e, f;

  public:
    C()
    {
      cout << "    enter e : ";
      cin >> e;
      cout << "    enter f : ";
      cin >> f;
    }
    void display()
    {
      cout << "\n    a = " << a << "\t(member of class A private in class C)";
      cout << "\n    b = " << b << "\t(member of class A private in class C)";
      cout << "\n    c = " << c << "\t(member of class B private in class C)";
      cout << "\n    d = " << d << "\t(member of class B private in class C)";
      cout << "\n    e = " << e << "\t(member of class C)";
      cout << "\n    f = " << f << "\t(member of class C)";
    }
};

int main()
{
  cout << "PROGRAM TO DEMONSTRATE AN EXAMPLE OF MULTILEVEL INHERITANCE\n\n";
  
  C x;  //calls the constructor of class C which in turn
  //      which in turn calls the constructors of class A and B
  //      The constructor of base classes are executed first and
  //      then that of derived class

  x. display();

  return 0;
}