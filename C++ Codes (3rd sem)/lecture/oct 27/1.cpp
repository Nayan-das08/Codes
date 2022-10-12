using namespace std;
# include <iostream>
# include <math.h>

class shape
{
  protected:
    int radius;
  
  public:
    virtual void input()
    {
      cout << "Enter radius : ";
      cin >> radius;
    }
    virtual void show()
    {
      cout << "Area of circle = " << M_PI*radius*radius << " sq. units";
    }
};

class circle : public shape
{
  public:
    /*virtual void input()
    {
      cout << "Enter radius : ";
      cin >> radius;
    }*/
    /*void show()
    {
      cout << "Area of circle : " << M_PI*radius*radius;
    }*/
};

class cylinder : public shape
{
  int height;
  
  public:
    void input()
    {
      cout << "Enter radius : ";
      cin >> radius;
      cout << "Enter height : ";
      cin >> height;
    }
    void show()
    {
      cout << "Area of cylinder : " << 2*M_PI*radius*radius + 2*M_PI*radius*height << " sq. units";
    }
};

int main()
{
  shape *S, a;
  circle C1;
  cylinder C2;

  cout << "CIRCLE\n";
  S = &a;
  S->input();
  S->show();

  cout << "\n\nCYLINDER\n";
  S = &C2;
  S->input();
  S->show();

  return 0;
}
