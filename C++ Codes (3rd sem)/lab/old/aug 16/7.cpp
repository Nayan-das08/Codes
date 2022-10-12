//Macro obtaining the largest of three numbers

using namespace std;

# include <iostream>
# define FIND_LARGEST(a,b,c)    ((a>b && a>c) ? a : (b>c ? b : c))

int main()
  {
    int a, b, c, num;
    cout << "MACRO OBTAINING THE LARGEST NUMBER";
    cout << "Enter first number  : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number  : ";
    cin >> c;
    
    num = FIND_LARGEST(a,b,c);
    cout << "The largest number among " << a  << ", " << b << " and " << c  << " is : " << num;
    return 0;
  }