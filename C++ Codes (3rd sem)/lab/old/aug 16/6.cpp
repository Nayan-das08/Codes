//Read and display a matrix of size mxn 
//Showing that the effect of default argument can be achieved with overloading

using namespace std;

# include <iostream>

void enter_matrix(int c, int X[][30], int r = 1)  //default arg.
	{
		int i, j;
		for (i=0; i<r; i++)
			for (j=0; j<c; j++)
				{
					cout << "\telement " << i << "-" << j << " : ";
					cin >> X[i][j];
				}
	}

void enter_matrix(int r, int c, int X[][30])
	{
		int i, j;
		for (i=0; i<r; i++)
			for (j=0; j<c; j++)
				{
					cout << "\telement " << i << "-" << j << " : ";
					cin >> X[i][j];
				}
	}

void show_matrix(int c, int X[][30], int r = 1)   //default arg.
  {
    int i, j;
    for (i=0; i<r; i++)
      {
        for (j=0; j<c; j++)
          cout << "\t" << X[i][j];
        cout << "\n";
      }
  }

void show_matrix(int r, int c, int X[][30])
  {
    int i, j;
    for (i=0; i<r; i++)
      {
        for (j=0; j<c; j++)
          cout << "\t" << X[i][j];
        cout << "\n";
      }
  }

int main()
  {
    int A[30][30], B[30][30], i, j, m, n;
    cout << "READ AND DISPLAY MATRIX";
    cout << "\nEnter the order of the matrix :- \n";
    cout << "\tEnter no. of rows : ";
    cin >> m;
    cout << "\tEnter no. of columns : ";
    cin >> n;
    
    cout << "\nEnter the matrix A :-\n";
    enter_matrix(m, n, A);
    cout << "\nEnter the matrix B :-\n";
    enter_matrix(n, B);

    cout << "\nMatrix A of order " << m << "x" << n << ":-\n";
    show_matrix(m, n, A);
    cout << "\nMatrix B of order " << m << "x" << n << ":-\n";
    show_matrix(n, B);
    return 0;
  }