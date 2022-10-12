// exception handling

using namespace std;
# include <fstream>
# include <iostream>
# include <stdio.h>

class fraction
{
  float num, den;

  public:
    void read_data();
    void divide();
};

void fraction :: read_data()
{
  cout << "Enter numerator   : ";
  cin >> num;
  cout << "Enter denominator : ";
  cin >> den;
}
void fraction :: divide()
{
  try
  {
    if (den == 0)
      throw(den);
  }
  catch(float x)
  {
    cout << "\nDivide by zero error caught!";
    Abort();
  }

  cout << "\n" << num << '/' << den << " = " << num/den;
}

int main()
{
  fraction F;
  F.read_data();
  F.divide();
  return 0;
}

