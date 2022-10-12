//rough program

using namespace std;
# include <iostream>
# include <stdlib.h>
int b[] = {5,2};

void display(int x[] = b)
  {
    int i, j;
    for (i=0; i<3; i++)
      cout << "\t" << x[i];
  }

int main()
  {
    system("cls");
    int a[] = {5,6,7};
    int i, j;
    for (i=0; i<3; i++)
      cout << "\t" << a[i];
    
    cout << endl;
    
    display(a);
    
    cout << endl;
    
    display();
    return 0;
  }
