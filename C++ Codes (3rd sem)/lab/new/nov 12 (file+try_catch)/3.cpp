// out of bounds

using namespace std;
# include <iostream>
# include <stdio.h>
# define size 3
int main()
{
  int array[size];
  int i=0, ch;
  cout << "array size is " << size << endl;
  do
  {
    try
    {
      if (i >= size)
        throw(i);
      else
      {
        cout << "\nEnter data : ";
        cin >> array[i];
        i++;
      }
    }
    catch(int x)
    {
      cout << "\nOut of bounds error caught\n";
      for (int j=0; j<size; j++)
        cout << array[j] << "  ";
      cout << "\n";
      break;
    }
    
    cout << "continue ? (1 for yes, 0 for no) : ";
    cin >> ch;
  }while (ch != 0);

  cout << "\nExiting from program...";
  return 0;
}
