//check for number palindrome and string palindrome
using namespace std;

# include <iostream>
# include <conio.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

void number_palindrome()
	{
		int r;
		long n, m=0, temp;
		cout << "\nEnter the number : ";
		cin >> n;
		temp = n;
		while (n != 0)
			{
				r = n%10;
				m = m*10 + r;
				n = n/10;
			}
		n = temp;
		if (m == n)
			cout << "\nthe number " << n << " is a palindrome number";
		else
			cout << "\nthe number " << n << " is not a palindrome number";
	}

void string_palindrome()
	{
		char str[25], temp[25], buffer;
		cout << "\nEnter the string : ";
		scanf("%c", &buffer); //a char variable to clear the buffer
		gets(str);
		cout << "input : " << str;
		strcpy(temp, str);
		if (strcmpi(temp, strrev(str)) == 0)
			cout << "\nthe string '" << temp << "' is a palindrome";
		else
			cout << "\nthe string '" << temp << "' is not a palindrome";
	}
int main()
	{
		//system("cls");
			
		int choice;
		cout << "PALINDROME CHECKER"
				 << "\nPress 1 for checking number"
				 << "\nPress 2 for checking strings"
				 << "\n\tEnter your choice : ";
		cin >> choice; 

		switch (choice)
			{
				case 1: number_palindrome();
								break;
				case 2: string_palindrome();
								break;
				default: cout << "\nInvalid number entered, execute the program again.";
			}
		//getch();
		return 0;
	}