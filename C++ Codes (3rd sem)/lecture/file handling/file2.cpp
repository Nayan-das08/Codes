using namespace std;
# include <iostream>
# include <string.h>
# include <fstream>

int main()
{
	int i;
	char ch='a', str[500];
	ifstream file;

	file.open("new.txt");

	cout << "\n\n";
	cout << "---------------------------------\n";
	cout << "file >> ch 		-> 10 times" << "\n\t";
	for (i=0; i<10; i++)
	{
		file >> ch;
		cout << ch;
	}
	cout << "\n\n";
	file.seekg(0);

	cout << "---------------------------------\n";
	cout << "file >> str 		-> 10 times" << "\n\t";
	for (i=0; i<10; i++)//while (file)
	{
		file >> str;
		cout << str;
	}
	cout << "\n\n";
	file.seekg(0);

	cout << "---------------------------------\n";
	cout << "ch = file.get()		-> 10 times" << "\n\t";
	for (i=0; i<10; i++)//while (file)
	{
		ch = file.get();
		cout << ch;
	}
	cout << "\n\n";
	file.seekg(0);

	cout << "---------------------------------\n";
	cout << "file.getline(str, 100, ',') 	-> 2 times" << "\n\t";
	file.getline(str, 100, ',');
	cout << str << endl;
	file.getline(str, 100, ',');
	cout << str;
	cout << "\n\n";
	file.seekg(0);
	
	cout << "---------------------------------\n";
	cout << "file.get(str, 100, ',') 		-> 2 times" << "\n\t";
	file.get(str, 50, ',');
	cout << str << endl;
	file.get(str, 50, ',');
	cout << str;
	cout << "\n\n";
	file.seekg(0);

/*	cout << "---------------------------------\n";
	cout << "file.read()" << "\n\t";
	file.read(str, 20);
	cout << str;
	cout << "\n\n";
	file.seekg(0);
*/

	// file >> ch
	// gives one character from file to ch
	// ignores whitespace characters

	// file >> str
	// gives one string from file to str
	// the strings in file are separated by whitespace chars
	// ignores whitespace characters

	// ch = file.get()
	// gives one character from file to ch
	// transfers whitespace characters

	// file.getline(str, 100, ',')
	// gives string of 100 chars from file to str
	// till delimiter (',') is read
	// the delimiter is not transfered to the stream

	//file.get(str, 100, ',')
	// gives string of 100 chars from file to str
	// till delimiter (',') is read
	// delimiter is transfered to the stream
	
	// in out case since the delimiter is kept in stream
	// get() doesnt not get anything 



	file.close();
}