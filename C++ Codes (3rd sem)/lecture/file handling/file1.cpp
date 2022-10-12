// text file

using namespace std;
# include <iostream>
# include <string.h>
# include <fstream>

int main()
{
	char str[50];
	cout << "enter your string :- \n\t";
	gets(str);
	
	ofstream file;
	file.open("textfile.txt");
	file << str;
	file.close();

	ifstream file2;
	file2.open("textfile.txt");
	file2 >> str;
	cout << "the string is :-\n\t";
	cout << str; 
	file2.close();
}	