//2d array and matrisx operations

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

void enter_matrix(int r, int c, int X[][10])
	{
		int i, j;
		for (i=0; i<r; i++)
			for (j=0; j<c; j++)
				{
					printf("\telement %d-%d : ", i, j);
					scanf("%d", &X[i][j]);
				}
	}

void show_matrix(int r, int c, int X[][10])
  {
    int i, j;
    for (i=0; i<r; i++)
      {
        for (j=0; j<c; j++)
          printf("\t%d", X[i][j]);
        printf("\n");
      }
  }

void add()
  {
    int r, c, A[10][10], B[10][10], C[10][10], i, j;
    printf("ADDTION OF TWO MATRICES");
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
    printf("\nMatrix C:-\n");
    show_matrix(r, c, C);
  }


void main()
  {
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, m, n;
    int choice;

    printf("Press");
    printf("\n\t1 for addition");
    printf("\n\t2 for subtraction");
    printf("\n\t3 for multiplication");
    printf("\n\t4 for transpose");
    printf("\n\t5 for exit");
    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice)
      {
        case 1: add();
                break;
        case 2: //subtract();
                break;
        case 3: //multiply();
                break;
        case 4: //transpose();
                break;
        case 5: exit(0);
				default: printf("\nInvalid choice entered, execute the program again");
      }
  }
