//Inline function obtaining the largest of three numbers

using namespace std;

# include <iostream>

inline int find_largest(int a, int b, int c)
  {
    return ((a>b && a<c) ? a : (b>c ? b : c));
  }
int main()
  {
    int a, b, c, num;
    cout << "INLINE FUNCTION OBTAINING THE LARGEST FUNCTION";
    cout << "Enter first number  : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number  : ";
    cin >> c;
    
    num = find_largest(a,b,c);
    cout << "The largest number among " << a  << ", " << b << " and " << c  << " is : " << num;
    return 0;
  }