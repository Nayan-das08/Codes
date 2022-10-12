//Calculator for matrices

using namespace std;
# include <iostream>
# include <conio.h>
# include <stdlib.h>

void enter_matrix(int r, int c, int X[][10])
	{
		int i, j;
		for (i=0; i<r; i++)
			for (j=0; j<c; j++)
				{
					cout << "\telement " << i << "-" << j << " : ";
					cin >> X[i][j];
				}
	}

void show_matrix(int r, int c, int X[][10])
  {
    int i, j;
    for (i=0; i<r; i++)
      {
        for (j=0; j<c; j++)
          cout << "\t" << X[i][j];
        cout << "\n";
      }
  }

void add()
  {
    int r, c, A[10][10], B[10][10], C[10][10], i, j;
    cout << "ADDTION OF TWO MATRICES";
		cout << "\n\nEnter the order of the matrix :- \n";
    cout << "Enter no. of rows : ";
    cin >> r;
    cout << "Enter no. of columns : ";
    cin >> c;

    cout << "\nEnter first matrix A :-\n";
    enter_matrix(r, c, A);
    cout << "\nEnter second matrix B :-\n";
    enter_matrix(r, c, B);
    cout << "\nMatrix A :-\n";
    show_matrix(r, c, A);
    cout << "\nMatrix B :-\n";
    show_matrix(r, c, B);
    
    for (i=0; i<r; i++)
      for (j=0; j<c; j++)
        C[i][j] = A[i][j] + B[i][j];
    
    cout << "\n\nSum of matrices A and B :-"
         << "\n\nMatrix C:-\n";
    show_matrix(r, c, C);
  }

void subtract()
  {
    int r, c, A[10][10], B[10][10], C[10][10], i, j;
    cout << "SUBTRACTION OF TWO MATRICES";
		cout << "\n\nEnter the order of the matrix :- \n";
    cout << "Enter no. of rows : ";
    cin >> r;
    cout << "Enter no. of columns : ";
    cin >> c;

    cout << "\nEnter first matrix A :-\n";
    enter_matrix(r, c, A);
    cout << "\nEnter second matrix B :-\n";
    enter_matrix(r, c, B);
    cout << "\nMatrix A :-\n";
    show_matrix(r, c, A);
    cout << "\nMatrix B :-\n";
    show_matrix(r, c, B);
    
    for (i=0; i<r; i++)
      for (j=0; j<c; j++)
        C[i][j] = A[i][j] - B[i][j];
    
    cout << "\n\nDifference of matrices A and B :-"
         << "\n\nMatrix C:-\n";
    show_matrix(r, c, C);
  }

void multiply()
  {
    int r1, c1, r2, c2, A[10][10], B[10][10], C[10][10]={0}, i, j, k;
    cout << "MULTIPLICATION OF TWO MATRICES";
		cout << "\n\nEnter the order of the matrix  A:- \n";
    cout << "Enter no. of rows : ";
    cin >> r1;
    cout << "Enter no. of columns : ";
    cin >> c1;

    cout << "\nEnter the order of the matrix  B:- \n";
    cout << "Enter no. of rows : ";
    cin >> r2;
    cout << "Enter no. of columns : ";
    cin >> c2;
    
    if (c1 != r2)
      printf("\nThe multiplication for the entered orders is illegal!");
    else 
      {
        cout << "\nEnter first matrix A :-\n";
        enter_matrix(r1, c1, A);
        cout << "\nEnter second matrix B :-\n";
        enter_matrix(r2, c2, B);
        cout << "\nMatrix A :-\n";
        show_matrix(r1, c1, A);
        cout << "\nMatrix B :-\n";
        show_matrix(r2, c2, B);           

        for (i=0; i<r1; i++)
          for (j=0; j<c2; j++)
            for (k=0; k<c2; k++)
              C[i][j] = C[i][j] + A[i][k]*B[k][j];
        
        cout << "\n\nProduct of matrices A and B :-"
             << "\n\nMatrix C:-\n";
        show_matrix(r1, c2, C);
      }
        

  }

void transpose()
  {
    int r, c, A[10][10], B[10][10], i, j;
    cout << "TRANSPOSE OF THE MATRICES";
		cout << "\n\nEnter the order of the matrix :- \n";
    cout << "Enter no. of rows : ";
    cin >> r;
    cout << "Enter no. of columns : ";
    cin >> c;

    cout << "\nEnter matrix A :-\n";
    enter_matrix(r, c, A);
    cout << "\nMatrix A :-\n";
    show_matrix(r, c, A);
    
    for (i=0; i<c; i++)
      for (j=0; j<r; j++)
        B[i][j] = A[j][i];
    
    cout << "\n\nTranspose of matrix A :-"
         << "\n\nMatrix A':-\n";
    show_matrix(c, r, B);
  }

int main()
  {
    system("cls");
    int choice;
    cout << "Press"
         << "\n\t1 for addition"
         << "\n\t2 for subtraction"
         << "\n\t3 for multiplication"
         << "\n\t4 for transpose"
         << "\n\t5 for exit"
         << "\n\nEnter your choice : ";
    cin >> choice;

    switch (choice)
      {
        case 1: add();
                break;
        case 2: subtract();
                break;
        case 3: multiply();
                break;
        case 4: transpose();
                break;
        case 5: exit(0);
				default: cout << "\nInvalid choice entered, execute the program again";
      }
    getch();
    return 0;
  }