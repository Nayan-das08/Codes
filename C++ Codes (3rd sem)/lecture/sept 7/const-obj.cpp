using namespace std;
# include <iostream>

class A
{
  int x, y;

  public:
    A()
    {
      x = 10;
      y = 20;
    }
    void input()
    {
      cout << "Enter x : ";
      cin >> x;
      cout << "Enter y : ";
      cin >> y;
    }
    void display()
    {
      cout << "x = " << x << endl;
      cout << "y = " << y;
    }
};

int main()
{
  const A abc;
}
