//rough 2

using namespace std;
# include <iostream>
# include <stdlib.h>
# include <string.h>

int main()
  {
    char a[20], temp[20];
    int n;
    cout << "enter a number : ";
    cin >> n;
		cout << "\nEnter the string : ";
		gets(a);
		//cin >> a;
		strcpy(temp, a);
		if (strcmpi(temp, strrev(a)) == 0)
			cout << "\nthe string '" << temp << "' is a palindrome";
		else
			cout << "\nthe string '" << temp << "' is not a palindrome";
  }