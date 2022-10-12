// Inheritance

using namespace std;
# include <iostream>

class A
{
  protected:
    int x, y;

  public:
    int a, b;
    A()
    {
      x = 10;
      y = 20;
      a = 30;
      b = 40;
    }
    void change()
    {
      x++;
      y++;
      a++;
      b++;
    }
};

class B : public A
{
  public:
    void display()
    {
      cout << "\nx = " << x;
      cout << "\ny = " << y;
      cout << "\na = " << a;
      cout << "\nb = " << b;
    }
};

int main()
{
  B x;
  x.display();
  x.change();
  cout << endl;
  x.display();
}