//A function to raise a number 'm' to a power 'n' 
//using function overloading

using namespace std;
# include <iostream>

long power(int a, int b)
  {
    long ans=1;
    for (int i=1; i<=b; i++)
      ans *= a;
    return ans;
  } 

double power(double a, int b)
  {
    double ans=1;
    for (int i=1; i<=b; i++)
      ans *= a;
    return ans;
  } 

int main()
  {
    int exp, base_int;
    double base_float;
    cout << "CALCULATING POWER OF A NUMBER";
    cout << "Enter the integer base : ";
    cin >> base_int;
    cout << "Enter the floating point base : ";
    cin >> base_float;
    cout << "Enter the exponent : ";
    cin >> exp;
    
    cout << base_int << "^" << exp << " = " << power(base_int, exp) << endl;
    cout << base_float << "^" << exp << " = " << power(base_float, exp);
    return 0;
  }