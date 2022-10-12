// Write a menu driven to perform following operations on 2 matrices :-
//Addition, Subtraction, Multiplication and Transpose

# include <stdio.h>
# include <conio.h>

void enter_matrix(int r, int c, int X[][10]) {
  int i, j;
  for (i=0; i<r; i++)
    for (j=0; j<c; j++) {
      printf("  array[%d][%d] : ", i, j);
      scanf("%d", &X[i][j]);
    }
}

void show_matrix(int r, int c, int X[][10]) {
  int i, j;
  for (i=0; i<r; i++) {
    for (j=0; j<c; j++)
      printf("    %d", X[i][j]);
    printf("\n");
  }
}


void add(int A[][10], int B[][10], int C[][10], int r, int c) {
  int i, j;
  
  printf("\nADDTION OF TWO MATRICES");
  printf("\n\nEnter the order of the matrix :- \n");
  printf("Enter no. of rows : ");
  scanf("%d", &r);
  printf("Enter no. of columns : ");
  scanf("%d", &c);

  printf("\nEnter first matrix A :-\n");
  enter_matrix(r, c, A);
  printf("\nEnter second matrix B :-\n");
  enter_matrix(r, c, B);
  printf("\nMatrix A :-\n");
  show_matrix(r, c, A);
  printf("\nMatrix B :-\n");
  show_matrix(r, c, B);
  
  for (i=0; i<r; i++)
    for (j=0; j<c; j++)
      C[i][j] = A[i][j] + B[i][j];
  
  printf("\n\nSum of matrices A and B :-");
  printf("\n\nMatrix C:-\n");
  show_matrix(r, c, C);
}

void subtract(int A[][10], int B[][10], int C[][10], int r, int c) {
  int i, j;

  printf("\nSUBTRACTION OF TWO MATRICES");
  printf("\n\nEnter the order of the matrix :- \n");
  printf("Enter no. of rows : ");
  scanf("%d", &r);
  printf("Enter no. of columns : ");
  scanf("%d", &c);

  printf("\nEnter first matrix A :-\n");
  enter_matrix(r, c, A);
  printf("\nEnter second matrix B :-\n");
  enter_matrix(r, c, B);
  printf("\nMatrix A :-\n");
  show_matrix(r, c, A);
  printf("\nMatrix B :-\n");
  show_matrix(r, c, B);
  
  for (i=0; i<r; i++)
    for (j=0; j<c; j++)
      C[i][j] = A[i][j] - B[i][j];
  
  printf("\n\nDifference of matrices A and B :-");
  printf("\n\nMatrix C:-\n");
  show_matrix(r, c, C);
}

void multiply(int A[][10], int B[][10], int C[][10], int r1, int c1, int r2, int c2) {
  int i, j, k;

  printf("\nMULTIPLICATION OF TWO MATRICES");
  printf("\n\nEnter the order of the matrix A:- \n");
  printf("Enter no. of rows : ");
  scanf("%d", &r1);
  printf("Enter no. of columns : ");
  scanf("%d", &c1);

  printf("\nEnter the order of the matrix B:- \n");
  printf("Enter no. of rows : ");
  scanf("%d", &r2);
  printf("Enter no. of columns : ");
  scanf("%d", &c2);

  if (c1 != r2)
      printf("\nThe multiplication for the entered orders is illegal!");
  else {    
    printf("\nEnter first matrix A :-\n");
    enter_matrix(r1, c1, A);
    printf("\nEnter second matrix B :-\n");
    enter_matrix(r2, c2, B);
    printf("\nMatrix A :-\n");
    show_matrix(r1, c1, A);
    printf("\nMatrix B :-\n");
    show_matrix(r2, c2, B);
    
    for (i=0; i<r1; i++)
      for (j=0; j<c2; j++)
        for (k=0; k<r2; k++) {
          C[i][j] = C[i][j] + A[i][k]*B[k][j];
        }
    printf("\n\nProduct of matrices A and B :-");
    printf("\n\nMatrix C:-\n");
    show_matrix(r1, c2, C);
  }
}

void transpose(int A[][10], int r, int c) {
  int i, j;

  printf("\nTRANSPOSE OF THE MATRIX");
  printf("\n\nEnter the order of the matrix :- \n");
  printf("Enter no. of rows : ");
  scanf("%d", &r);
  printf("Enter no. of columns : ");
  scanf("%d", &c);

  printf("\nEnter the matrix :-\n");
  enter_matrix(r, c, A);
  printf("\nThe Matrix is :-\n");
  show_matrix(r, c, A);
  
  printf("\n\nTranspose of the matrix :-");
  printf("\n\nMatrix C:-\n");
  for (i=0; i<c; i++) {
    for (j=0; j<r; j++) 
      printf("    %d", A[j][i]);
    printf("\n");
  }
}


int main() {
  int A[10][10], B[10][10], C[10][10]={0};
  int i, j, choice;
  int r, c, a, b;

  printf("MATRIX CALCULATOR\n\n");

  printf("Press 1 for Addition\n");
  printf("Press 2 for Subtraction\n");
  printf("Press 3 for Multiplication\n");
  printf("Press 4 for Transpose\n");
  printf("\nEnter the choice : ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      add(A, B, C, r, c);
      break;
    
    case 2:
      subtract(A, B, C, r, c);
      break;
    
    case 3:
      multiply(A, B, C, r, c, a, b);
      break;
    
    case 4:
      transpose(A, r, c);
      break;

    default:
      printf("INVALID OPTION CHOSEN.");
      printf("\nRun the program again");
  }

  getch();
  return 0;
}