// file handling with text files

using namespace std;
# include <iostream>
# include <stdio.h>
# include <fstream>

int main()
{
  char txt[1000], temp[1000];
  
  cout << "WRITING IN THE FILE\n\n";
  cout << "input your text : \n\t";
  gets(txt);
  
  ofstream file("TEXTFILE2.txt");
  file << txt << endl;

  cout << "\n\ninput your text : \n\t";
  gets(txt);
  
  file << txt;

  file.close();

  cout << "\n\n--------------------------------";
  
  cout << "\n\nREADING FROM THE FILE\n";
  ifstream file2("TEXTFILE2.txt");
  
  cout << "para 1\n\t";
  file2.getline(temp, 1000);
  cout << temp;  
  
  cout << "\n\npara 2\n\t";
  file2.getline(temp, 1000);
  cout << temp;
  
  file2.close();
  return 0;
}