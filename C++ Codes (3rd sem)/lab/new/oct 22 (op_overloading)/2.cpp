// addition and subtraction of matrices

using namespace std;
# include <iostream>
# include <stdlib.h>
# include <conio.h>

class matrix
{
  int X[5][5], r, c;
  

  public:
    matrix(int a, int b) : r(a), c(b)   {}
    void input(char name);
    void show(char name);
    matrix operator+(matrix b);
    matrix operator-(matrix b);
};

void matrix ::input(char name)
    {
      int i, j;
      cout << "\nEnter Matrix " << name << " :-\n";
      for (i=0; i<r; i++)
        for (j=0; j<c; j++)
        {
          cout << "    Enter " << name << "[" << i << "][" << j << "] : ";
          cin >> X[i][j];
        }
    }

void matrix ::show(char name)
    {
      int i, j;
      cout << "\nMatrix " << name << " :-\n";
      for (i=0; i<r; i++)
      {
        cout << "\t";
        for (j=0; j<c; j++)
          cout << X[i][j] << "\t";
        cout << endl;
      }
    }

matrix matrix ::operator+(matrix b)
{
  int i, j;
  matrix temp(r,c);   // r and c belong to matrix A
  for (i=0; i<r; i++)
    for (j=0; j<c; j++)
      temp.X[i][j] = X[i][j] + b.X[i][j];
  return temp;
}

matrix matrix ::operator-(matrix b)
{
  int i, j;
  matrix temp(r,c);   // r and c belong to matrix A
  for (i=0; i<r; i++)
    for (j=0; j<c; j++)
      temp.X[i][j] = X[i][j] - b.X[i][j];
  return temp;
}

int main()
{
  int choice, r, c;

  cout << "MATRIX ADDITION AND SUBTRACTION USING OPERATOR OVERLOADING\n\n";
  cout << "Enter no. of rows : ";
  cin >> r;
  cout << "Enter no. of columns : ";
  cin >> c;

  matrix A(r,c), B(r,c), C(r,c);
  
  do
  {
    cout << "\nPress 1 for Matrix Addition"
         << "\nPress 2 for Matrix Subtraction"
         << "\nPress 0 for exit";
    
    cout << "\n\nEnter choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      A.input('A');
      B.input('B');
      A.show('A');
      B.show('B');
      C = A + B;
      cout << "\nC = A + B\n";
      C.show('C');
      break;
    
    case 2:
      A.input('A');
      B.input('B');
      A.show('A');
      B.show('B');
      C = A - B;
      cout << "\nC = A - B\n";
      C.show('C');
      break;

    case 0:
      exit(0);
      break;

    default:
      cout << "\nINVALID INPUT!";
      cout << "\nPress any key to try again...\n\n";
      getch();
      cout << "-------------------------\n";
      break;
    }
  }while (choice != 1 && choice != 2);
  
  
  return 0;

}