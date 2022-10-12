//Read and display a matrix of size mxn 

using namespace std;

# include <iostream>
# include <conio.h>

void enter_matrix(int r, int c, int X[][30])
	{
		int i, j;
    cout << "\nEnter the matrix :-\n";
		for (i=0; i<r; i++)
			for (j=0; j<c; j++)
				{
					cout << "\telement " << i << "-" << j << " : ";
					cin >> X[i][j];
				}
	}

void show_matrix(int r, int c, int X[][30])
  {
    int i, j;
    cout << "\nThe matrix of order " << r << "x" << c << ":-\n";
    for (i=0; i<r; i++)
      {
        for (j=0; j<c; j++)
          cout << "\t" << X[i][j];
        cout << "\n";
      }
  }

int main()
  {
    int arr[30][30], i, j, m, n;
    cout << "READ AND DISPLAY MATRIX";
    cout << "\nEnter the order of the matrix :- \n";
    cout << "\tEnter no. of rows : ";
    cin >> m;
    cout << "\tEnter no. of columns : ";
    cin >> n;

    enter_matrix(m, n, arr);
    show_matrix(m, n, arr);
    getch();
    return 0;
  }