// Program to demnstrate example of multilevel inheritance

using namespace std;
# include <iostream>
# include <stdio.h>

class A
{
  protected:
    int a, b;
};

class B : private A
{
  //private: a, b inherited from A privately
  
  protected:
    int c, d;
    void displayA()
    {
      cout << "\n    a = " << a << "\t(member of class A private in class B)";
      cout << "\n    b = " << b << "\t(member of class A private in class B)";
    }

  public:
    void inputAB()
    {
      cout << "    enter a : ";
      cin >> a;
      cout << "    enter b : ";
      cin >> b;
      cout << "    enter c : ";
      cin >> c;
      cout << "    enter d : ";
      cin >> d;
    }
    
};

class C : public B
{
  //protected: c, d, displayA() inherited from B
  //public: inputAB() inherited from B
  int e, f;

  public:
    void inputC()
    {
      cout << "    enter e : ";
      cin >> e;
      cout << "    enter f : ";
      cin >> f;
    }
    void displayC()
    {
      displayA();   
      cout << "\n    c = " << c << "\t(member of class B protected in class C)";
      cout << "\n    d = " << d << "\t(member of class B protected in class C)";
      cout << "\n    e = " << e << "\t(member of class C)";
      cout << "\n    f = " << f << "\t(member of class C)";
    }
};

int main()
{
  C x;
  
  cout << "PROGRAM TO DEMONSTRATE AN EXAMPLE OF MULTILEVEL INHERITANCE\n";
  cout << "\nEnter the values :-\n";
  
  x.inputAB();
  x.inputC();

  cout << "\nThe entered values are :-";
  x.displayC();

  return 0;
}