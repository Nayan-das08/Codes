// Program to demonstrate example of hierarchical inheritance to get a square and cube of a number

using namespace std;
# include <iostream>

class number
{
  protected:
    int n;
};

class square : public number
{
  int sq;

  public:
    square(int val)
    {
      n = val;
      sq = n*n;
    }
    void displaysq()
    {
      cout << "\nThe square of " << n << " = " << sq;
    }
};

class cube : public number
{
  int cu;
  
  public: 
    cube(int val)
    {
      n = val;
      cu = n*n*n;
    }
    void displaycu()
    {
      cout << "\nThe cube of " << n << " = " << cu;
    }
};

int main()
{
  int val;

  cout << "Enter a number : ";
  cin >> val;

  square S(val);
  cube C(val);

  S.displaysq();
  C.displaycu();

  return 0;
}