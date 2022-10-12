// constructor and destructor

using namespace std;
# include <iostream>

class A
  {
    int x;

    public:
      A()
        {
          cout << "\tconstructor called, hello\n";
        }
      
      ~A()
        {
          cout << "\tdestructor called, bye\n";
        }
  };

int main()
  {
    cout << "CONSTRUCTOR AND DESTRUCTOR\n\n";
    cout << "when objects a, b, c are declared\n";
    A a, b, c;
    cout << "\nwhen objects a, b, c are destroyed\n"; 
    return 0;
  }