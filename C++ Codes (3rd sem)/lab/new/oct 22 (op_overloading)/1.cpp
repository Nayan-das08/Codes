// operator overloading

using namespace std;
# include <iostream>
# include <stdlib.h>

class A
{
  int x, y;

  public:
    A() : x(0), y(0)  {}
    A(int a, int b) : x(a), y(b)  {}
    void show()
    {
      //cout << "\nData of class A";
      cout << "\n  x = " << x
           << "\n  y = " << y << endl;
    }
    void operator -()
    {
      x = -x;
      y = -y;
      cout << "\n\nUnary minus operator";
    }
    void operator ++()
    {
      x++;
      y++;
      cout << "\n\nIncrement operator";
    }
    void operator --()
    {
      x--;
      y--;
      cout << "\n\nDecrement Operator";
    }
    A operator +(A a2)
    {
      A temp;
      temp.x = x + a2.x;    
      // temp.x is used for a3, to be returned at the end of fn
      // x here gets the value from a1, a1 invokes the operator fn
      // a2.x gets value from a2, it is accessed in fn defn from arguments

      // <to be returned> = <invkes fn> + <passed as arg>
      temp.y = y + a2.y;
      cout << "\n\nBinary Plus Operator";
      return temp;
    }
    A operator -(A a2)
    {
      A temp;
      temp.x = x - a2.x;    
      temp.y = y - a2.y;
      cout << "\n\nBinary Minus Operator";
      return temp;
    }
    A operator *(A a2)
    {
      A temp;
      temp.x = x * a2.x;    
      temp.y = y * a2.y;
      cout << "\n\nBinary Multiply Operator";
      return temp;
    }
    A operator /(A a2)
    {
      A temp;
      temp.x = x / a2.x;    
      temp.y = y / a2.y;
      cout << "\n\nBinary Divide Operator";
      return temp;
    }

};

int main()
{
  A a1(12,87), a2(5,9), a3;

  cout << "ARITHMETIC OPERATOR OVERLOADING"; 
  int choice;
  do
  {
    cout << "\n\nData of a1";
    a1.show();
    cout << "\nData of a2";
    a2.show();
    cout << "\nData of a3";
    a3.show();

    cout << "\n\nChoose any arithmetic operation"
         << "\n    Press 1 for unary - for a1"
         << "\n    Press 2 for ++ for a1"
         << "\n    Press 3 for -- for a1"
         << "\n    Press 4 for Addition of a1 and a2"
         << "\n    Press 5 for Subtraction of a2 and a1"
         << "\n    Press 6 for Multiplication of a1 and a2"
         << "\n    Press 7 for Division of a1 by a2"
         << "\n    Press 0 for exit";
         
    cout << "\n\nEnter choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      -a1;
      cout << "\n-a1";
      a1.show();
      break;
    
    case 2:
      ++a1;
      cout << "\n++a1";
      a1.show();
      break;

    case 3:
      --a1;
      cout << "\n--a1";
      a1.show();
      break;

    case 4:
      a3 = a1 + a2;
      cout << "\na3 = a1 + a2";
      a3.show();
      break;

    case 5:
      a3 = a1 - a2;
      cout << "\na3 = a1 - a2";
      a3.show();
      break;

    case 6:
      a3 = a1 * a2;
      cout << "\na3 = a1 * a2";
      a3.show();
      break;

    case 7:
      a3 = a1 / a2;
      cout << "\na3 = a1 / a2";
      a3.show();
      break;

    case 0:
      cout << "\nExiting from program...";
      exit(0);
      break;

    default:
      cout << "\nINVALID INPUT";
      break;
    }
    cout << "\n---------------------------";
    
  } while (choice != 0);
  
  return 0;
}