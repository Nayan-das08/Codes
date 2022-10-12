// Program to demonstrate exampe of private-simple inheritance

using namespace std;
# include <iostream>

class A
{
  int i, j;   //not inherited anywhere
  
  protected:
    int x, y;

  public:
    void inputA()
    {
      cout << "    enter x : ";
      cin >> x;
      cout << "    enter y : ";
      cin >> y;
    }
};

class B : private A
{
  int p, q;

  public:
    void inputB()
    {
      cout << "    enter p : ";
      cin >> p;
      cout << "    enter y : ";
      cin >> q;
      inputA();   //not accessible in main() as it is private, hence called here
    }
    void display()
    {
      cout << "\n    x = " << x << "\t(member of class A)";
      cout << "\n    y = " << y << "\t(member of class A)";
      cout << "\n    p = " << p << "\t(member of class B)";
      cout << "\n    q = " << q << "\t(member of class B)" << "\n";
    }
};

int main()
{
  B b;
  
  cout << "PROGRAM TO DEMONSTRATE AN EXAMPLE OF PRIVATE-SIMPLE INHERITANCE\n";
  cout << "\nEnter the values :-\n";
  
  //b.inputA();   method of class A, not accessible from outside class A
  //              hence it is called from within inputB() in class B, where
  //              inputA() is private after B inheriting A prvately

  b.inputB();   //mehtod of class B
  
  cout << "\nThe entered values are :-";
  b.display();   //mehtod of class B

  return 0;
}