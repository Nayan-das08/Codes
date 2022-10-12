//A function to raise a number 'm' to a power 'n'

using namespace std;
# include <iostream>

double power(double a, int b)
  {
    double ans=1;
    for (int i=1; i<=b; i++)
      ans *= a;
    return ans;
  } 

int main()
  {
    int n;
    double m;
    cout << "CALCULATING POWER OF A NUMBER";
    cout << "Enter the base : ";
    cin >> m;
    cout << "Enter the exponent : ";
    cin >> n;
    
    cout << m << "^" << n << " = " << power(m,n);
    return 0;
  }