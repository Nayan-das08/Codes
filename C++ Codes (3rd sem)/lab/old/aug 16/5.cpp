//Read and display a matrix of size mxn with row parameter as default argument

using namespace std;

# include <iostream>

void enter_matrix(int c, int X[][30], int r = 1)
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

void show_matrix(int c, int X[][30], int r = 1)
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
    int arr[30][30], i, j, n;
    cout << "READ AND DISPLAY MATRIX";
    cout << "\nEnter the order of the matrix :- \n";
    cout << "\tEnter no. of columns : ";
    cin >> n;
    
    enter_matrix(n, arr);
    show_matrix(n, arr);
    return 0;
  }