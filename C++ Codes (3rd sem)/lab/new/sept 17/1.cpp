// Program to demonstrate exampe of simple inheritance

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

class B : public A
{
  int p, q;

  public:
    void inputB()
    {
      cout << "    enter p : ";
      cin >> p;
      cout << "    enter y : ";
      cin >> q;
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
  //int w;
  
  cout << "PROGRAM TO DEMONSTRATE AN EXAMPLE OF SIMPLE INHERITANCE\n";
  cout << "\nEnter the values :-\n";
  b.inputA();   //method of class A
  b.inputB();   //mehtod of class B
  
  cout << "\nThe entered values are :-";
  b.display();   //mehtod of class B

  return 0;
}