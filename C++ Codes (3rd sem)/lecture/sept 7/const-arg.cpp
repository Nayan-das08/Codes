// const arg

using namespace std;
# include <iostream>

void func(int a, const int b)
{
  a++;
  //b--;
}

int main()
{
  int a=100, b=200;
  cout << a << " " << b << endl;
  func(a,b);
  cout << a << " " << b;
  
}