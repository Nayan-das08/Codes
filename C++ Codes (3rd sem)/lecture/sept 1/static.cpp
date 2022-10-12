// static data members and member functions

using namespace std;
# include <iostream>

class A
  {
    private:
      int x, y;
      static int a;
      
    public:
      static int b;
      A()
        {
          x=0;
          y=0;
          a++;
          b++;
        }
      static int func1()
        {
          //cout << "x = " << x;  non-static data members cant be accessed
                                //using static member functions
          return a;
        }
      int func2()             // but non-static member functions can access
                              // static data members
        {return a;}
      static int func3()
        {return b;}
      int func4()
        {return b;}
      
  };
int A ::a = 5;
int A ::b = 10;

int main()
  {
    A a1;
    //cout << "A ::a = " << A ::a << endl;    doesnt work as static var 'a' is private
    cout << "A ::b = " << A ::b << endl;    //correct, as static var 'b' is public
    cout << "a using static int func1() = " << A::func1() << endl;
    cout << "a using int func2()        = " << a1.func2() << endl;
    cout << "b using static int func3() = " << a1.func3() << endl;
    cout << "b using int func4()        = " << a1.func4() << endl;
    return 0;
  }